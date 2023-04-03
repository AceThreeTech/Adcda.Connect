namespace Adcda.Connect.OIDC.Server.Services.Interface;
public interface IEmailService
{
    Task SendEmailAsync(string emailTo, string subject, string message);
}
