﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Adcda.Connect.Test.Blazor.Shared.Authorization;

public class ClaimValue
{
    public ClaimValue()
    {
    }

    public ClaimValue(string type, string value)
    {
        Type = type;
        Value = value;
    }

    public string Type { get; set; } = string.Empty;

    public string Value { get; set; } = string.Empty;
}
