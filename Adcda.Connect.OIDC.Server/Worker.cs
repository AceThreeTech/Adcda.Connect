using OpenIddict.Abstractions;
using static OpenIddict.Abstractions.OpenIddictConstants;
using System.Globalization;
using Adcda.Connect.OIDC.Server.Data;

namespace Adcda.Connect.OIDC.Server;
public class Worker : IHostedService
{
    private readonly IServiceProvider _serviceProvider;

    public Worker(IServiceProvider serviceProvider)
        => _serviceProvider = serviceProvider;
    public async Task StartAsync(CancellationToken cancellationToken)
    {
        using var scope = _serviceProvider.CreateScope();

        var context = scope.ServiceProvider.GetRequiredService<ApplicationDbContext>();
        await context.Database.EnsureCreatedAsync(cancellationToken);

        await RegisterApplicationsAsync(scope.ServiceProvider);
        await RegisterScopesAsync(scope.ServiceProvider);

        static async Task RegisterApplicationsAsync(IServiceProvider provider)
        {
            var manager = provider.GetRequiredService<IOpenIddictApplicationManager>();

            // Blazor Hosted
            if (await manager.FindByClientIdAsync("AdcdaConnectTestBlazor") is null)
            {
                await manager.CreateAsync(new OpenIddictApplicationDescriptor
                {
                    ClientId = "AdcdaConnectTestBlazor",
                    ConsentType = ConsentTypes.Explicit,
                    DisplayName = "Adcda Connect Test Blazor",
                    DisplayNames =
                        {
                            [CultureInfo.GetCultureInfo("en-US")] = "Test Application Blazor Client"
                        },
                    PostLogoutRedirectUris =
                        {
                            new Uri("https://localhost:50662/signout-callback-oidc")
                        },
                    RedirectUris =
                        {
                            new Uri("https://localhost:50662/signin-oidc")
                        },
                    ClientSecret = "adcda_connect_test_blazor_client_secret",
                    Permissions =
                        {
                            Permissions.Endpoints.Authorization,
                            Permissions.Endpoints.Logout,
                            Permissions.Endpoints.Token,
                            Permissions.Endpoints.Revocation,
                            Permissions.GrantTypes.AuthorizationCode,
                            Permissions.GrantTypes.RefreshToken,
                            Permissions.ResponseTypes.Code,
                            Permissions.Scopes.Email,
                            Permissions.Scopes.Profile,
                            Permissions.Scopes.Roles,
                            Permissions.Prefixes.Scope + "dataEventsBlazorTest"
                        },
                    Requirements =
                        {
                            Requirements.Features.ProofKeyForCodeExchange
                        }
                });
            }
        }

        static async Task RegisterScopesAsync(IServiceProvider provider)
        {
            var manager = provider.GetRequiredService<IOpenIddictScopeManager>();

            if (await manager.FindByNameAsync("dataEventsBlazorTest") is null)
            {
                await manager.CreateAsync(new OpenIddictScopeDescriptor
                {
                    DisplayName = "dataEventsBlazorTest API access",
                    DisplayNames =
                        {
                            [CultureInfo.GetCultureInfo("en-US")] = "Blazor Test API Access"
                        },
                    Name = "dataEventsBlazorTest",
                    Resources =
                        {
                            "rs_dataEventsBlazorTestApi"
                        }
                });
            }
        }
    }

    public Task StopAsync(CancellationToken cancellationToken) => Task.CompletedTask;
}
