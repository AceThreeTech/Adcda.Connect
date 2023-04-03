using Adcda.Connect.OIDC.Server.Data;
using Adcda.Connect.OIDC.Server.Helper;
using Adcda.Connect.OIDC.Server.Services.Interface;
using Microsoft.AspNetCore.Identity;
using Microsoft.AspNetCore.Mvc;
using Microsoft.AspNetCore.Mvc.RazorPages;
using Microsoft.AspNetCore.WebUtilities;
using System.ComponentModel.DataAnnotations;
using System.Text;

namespace Adcda.Connect.OIDC.Server.Areas.Identity.Pages.Account;

public class ForgotPasswordModel : PageModel
{
    private readonly UserManager<ApplicationUser> _userManager;
    private readonly IEmailService _emailSender;

    public ForgotPasswordModel(UserManager<ApplicationUser> userManager, IEmailService emailSender)
    {
        _userManager = userManager;
        _emailSender = emailSender;
    }

    [BindProperty]
    public ForgotPasswordInputBindingModel Input { get; set; }

    public string ReturnUrl { get; set; }

    [TempData]
    public string ErrorMessage { get; set; }

    public class ForgotPasswordInputBindingModel
    {
        [Required]
        [EmailAddress]
        public string Email { get; set; }
    }

    public IActionResult OnGet(string returnUrl = null)
    {
        ReturnUrl = returnUrl;
        return Page();
    }

    public async Task<IActionResult> OnPostAsync(string returnUrl)
    {
        if (!ModelState.IsValid)
        {
            return Page();
        }

        var user = await _userManager.FindByEmailAsync(Input.Email);
        if (user == null || !(await _userManager.IsEmailConfirmedAsync(user)))
        {
            // Don't reveal that the user does not exist or is not confirmed
            //return RedirectToPage("./ForgotPasswordConfirmation", new { ReturnUrl = returnUrl });
        }

        var code = await _userManager.GeneratePasswordResetTokenAsync(user);
        code = WebEncoders.Base64UrlEncode(Encoding.UTF8.GetBytes(code));
        var callbackUrl = Url.Page(
            "/Account/ResetPassword",
            pageHandler: null,
            values: new { area = "Identity", code },
            protocol: Request.Scheme);

        var email = HelperMethods.FormatEmail(callbackUrl);
        await _emailSender.SendEmailAsync(
            Input.Email,
            email.emailSubject,
            email.emailBody);

        //return RedirectToPage("./ForgotPasswordConfirmation", new { ReturnUrl = returnUrl });
        return Page();
    }
}
