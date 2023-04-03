using Adcda.Connect.OIDC.Server.Data;
using Adcda.Connect.OIDC.Server.Helper;
using Adcda.Connect.OIDC.Server.Services.Interface;
using Microsoft.AspNetCore.Identity;
using Microsoft.AspNetCore.Mvc;
using Microsoft.AspNetCore.Mvc.RazorPages;
using System.ComponentModel.DataAnnotations;

namespace Adcda.Connect.OIDC.Server.Areas.Identity.Pages.Account;

public class LoginWithSmsOtpModel : PageModel
{
    private readonly SignInManager<ApplicationUser> _signInManager;
    private readonly UserManager<ApplicationUser> _userManager;
    private readonly IEmailService _emailSender;
    private readonly ISmsService _smsSender;
    private readonly ILogger<LoginWithSmsOtpModel> _logger;
    public LoginWithSmsOtpModel(SignInManager<ApplicationUser> signInManager,
                                UserManager<ApplicationUser> userManager,
                                IEmailService emailSender,
                                ISmsService smsSender,
                                ILogger<LoginWithSmsOtpModel> logger)
    {
        _signInManager = signInManager;
        _userManager = userManager;
        _emailSender = emailSender;
        _smsSender = smsSender;
        _logger = logger;
    }

    [BindProperty]
    public LoginSmsInputBindingModel Input { get; set; }

    public string ReturnUrl { get; set; }

    public string UserPhone { get; set; }

    [TempData]
    public string ErrorMessage { get; set; }

    public class LoginSmsInputBindingModel
    {
        [Required]
        public string TwoFactorCode { get; set; }
    }

    public async Task OnGetAsync(string returnUrl = null)
    {
        // Ensure the user has gone through the username & password screen first
        var user = await _signInManager.GetTwoFactorAuthenticationUserAsync();

        if (user == null && user?.PhoneNumber == null)
        {
            throw new InvalidOperationException("Unable to load two-factor authentication user.");
        }

        var code = await _userManager.GenerateTwoFactorTokenAsync(user, "Phone");
        //var message = "Your security code is: " + code;
        //await _smsSender.SendSmsAsync(await _userManager.GetPhoneNumberAsync(user), message);

        UserPhone = HelperMethods.MaskString(user.PhoneNumber);
        ReturnUrl = returnUrl;
    }

    public async Task<IActionResult> OnPostAsync(string returnUrl = null, string submitType = null)
    {
        if (!ModelState.IsValid)
        {
            return Page();
        }

        if (string.IsNullOrWhiteSpace(submitType))
        {
            //resendcode logic
            return Page();
        }

        returnUrl ??= Url.Content("~/");
        var user = await _signInManager.GetTwoFactorAuthenticationUserAsync();
        if (user == null)
        {
            throw new InvalidOperationException($"Unable to load two-factor authentication user.");
        }
        var code = Input.TwoFactorCode.Replace(" ", string.Empty).Replace("-", string.Empty);
        var result = await _signInManager.TwoFactorSignInAsync("Phone", code, false, false);
        if (result.Succeeded)
        {
            _logger.LogInformation("User with ID '{UserId}' logged in with 2fa.", user.Id);
            return LocalRedirect(returnUrl);
        }
        else if (result.IsLockedOut)
        {
            _logger.LogWarning("User with ID '{UserId}' account locked out.", user.Id);
            return RedirectToPage("./Lockout");
        }
        else
        {
            _logger.LogWarning("Invalid authenticator code entered for user with ID '{UserId}'.", user.Id);
            ModelState.AddModelError(string.Empty, "Invalid authenticator code.");
            return Page();
        }
    }
}
