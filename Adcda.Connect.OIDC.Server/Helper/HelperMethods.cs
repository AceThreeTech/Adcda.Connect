using System.Text.Encodings.Web;

namespace Adcda.Connect.OIDC.Server.Helper;

public static class HelperMethods
{
    public static (string emailSubject, string emailBody) FormatEmail(string callbackUrl)
    {
        return ("Reset Password",
                $"Please reset your password by <a href='{HtmlEncoder.Default.Encode(callbackUrl)}'>clicking here</a>.");
    }

    public static string MaskString(string inputString)
    {
        if (string.IsNullOrWhiteSpace(inputString)) return string.Empty;
        int numStars = inputString.Length - 3;
        string stars = new string('*', numStars);
        string lastThreeChars = inputString.Substring(inputString.Length - 3);

        return stars + lastThreeChars;
    }
}

