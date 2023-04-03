[assembly: HostingStartup(typeof(Adcda.Connect.OIDC.Server.Areas.Identity.IdentityHostingStartup))]
namespace Adcda.Connect.OIDC.Server.Areas.Identity;
public class IdentityHostingStartup : IHostingStartup
{
    public void Configure(IWebHostBuilder builder)
    {
        builder.ConfigureServices((context, services) => {
        });
    }
}
