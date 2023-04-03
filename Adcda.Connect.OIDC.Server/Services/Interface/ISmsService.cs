namespace Adcda.Connect.OIDC.Server.Services.Interface;
public interface ISmsService
{
    Task SendSmsAsync(string number, string message);
}
