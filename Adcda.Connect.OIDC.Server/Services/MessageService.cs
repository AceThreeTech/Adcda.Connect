using Twilio.Types;
using Twilio;
using Adcda.Connect.OIDC.Server.Services.Interface;
using Microsoft.Extensions.Options;
using Twilio.Rest.Api.V2010.Account;
using Adcda.Connect.OIDC.Server.Entities;

namespace Adcda.Connect.OIDC.Server.Services;
// This class is used by the application to send Email and SMS
// when you turn on two-factor authentication in ASP.NET Identity.
public class MessageService : IEmailService, ISmsService
{
    public MessageService(IOptions<SMSOptions> optionsAccessor)
    {
        Options = optionsAccessor.Value;
    }

    public SMSOptions Options { get; }  // set only via Secret Manager

    public Task SendEmailAsync(string emailTo, string subject, string message)
    {
        // Plug in your email service here to send an email.
        return Task.FromResult(0);
    }

    public Task SendSmsAsync(string number, string message)
    {
        //var accountSid = Options.SMSAccountIdentification;
        //var authToken = Options.SMSAccountPassword;
        var accountSid = "AC2bdafb27c402a6ea5b3bb710ec0ff45f";
        var authToken = "2d49cd4253407c50b1776fdc758c4efd";
        TwilioClient.Init(accountSid, authToken);
        return MessageResource.CreateAsync(
            from: new PhoneNumber("+15005550006"),
            to: new PhoneNumber("+971503095753"),
            body: message);
    }
}
