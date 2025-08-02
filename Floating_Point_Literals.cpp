// A floating point literal{Literals.cpp} represents a real number with a fractional part or scientific (exponential) notation.
// A floating point literal must contain a decimal point, or an exponent, or both.
// Integer only values without a decimal or exponent are not floating point literals, they are integer literals{Integer_Literals.cpp}.
// It can include an integer part, decimal point, fractional part, exponent, and type suffix.

// Integer part:
// This is the digits before the decimal (.) point.
// The literal's integer part is always 0 or a positive sequence of digits.
// The “negative” is not part of the literal, it’s an operator.
// A negative value comes from the unary - operator outside the literal.
// We can also omit it if the number starts with a decimal point.
// Examples:
// 3.14 // Integer part = 3
// 10.0 // Integer part = 10
// .25  // Integer part = (empty)
// 0.5  // Integer part = 0

// Decimal point (.):
// Separates the integer part and fractional part.
// Can be with either an integer part, or a fractional part, or both.
// Examples:
// 3.14 // Decimal point with both integer part and a fractional part.
// 10.  // Decimal point with only integer part.
// .25  // Decimal point with only fractional part.

// Fractional part:
// The digits after the decimal (.) point.
// Can be empty if we have just the decimal point with integer part.
// Examples:
// 3.14159 // Fractional part = 14159
// 10.     // Fractional part = (empty)
// .75     // Fractional part = 75

// Exponent part:
// Written as e or E followed by an integer exponent.
// Represents multiplication by 10^(exponent).
// The exponent after e/E must be a complete integer, cannot be decimal or empty.
// We can add a + or - sign to the exponent.
// Examples:
// 2.5e3   = 2.5 * 10^3   = 2500
// 3.14E+2 = 3.14 * 10^2  = 314
// 0.5E1   = 0.5 * 10^1   = 5
// 1e-2    = 1 * 10^-2    = 0.01
// 1E3     = 1 * 10^3     = 1000
// .5e3    = 0.5 * 10^3   = 500
// .11E-2  = 0.11 * 10^-2 = 0.0011

// Suffix:
// Floating point literals can represent different types depending on suffix:
// The suffix can be uppercase or lowercase (case-insensitive).
// Changes the type of the floating point literal.
// No suffix (default) = double (64-bit)
// f or F              = float (32-bit)
// l or L              = long double (80-bit or 128-bit depending on platform)
// Examples:
// 3.14       = double
// 3.14f      = float
// 2.5E3F     = float
// 1.0l       = long double
// 314159E-5L = long double

// We can represent floating point literals either in decimal form or exponential (scientific) form.

// Decimal Floating Point Literals:
// Written with digits and a decimal point.
// Must have a decimal point with either an integer part, or a fractional part, or both.
// Decimal form written as:
// Integer part + Decimal point + Fractional part
// Integer part + Decimal point
// Decimal point + Fractional part
// Can optionally have a suffix to specify type.
// Examples:
// 3.14159  = Integer + Decimal + Fraction          = double
// 3.14159f = Integer + Decimal + Fraction + Suffix = float
// 3.14159F = Integer + Decimal + Fraction + Suffix = float
// 3.14159l = Integer + Decimal + Fraction + Suffix = long double
// 3.14159L = Integer + Decimal + Fraction + Suffix = long double
// 10.      = Integer + Decimal                     = double
// 10.f     = Integer + Decimal            + Suffix = float
// 10.F     = Integer + Decimal            + Suffix = float
// 10.l     = Integer + Decimal            + Suffix = long double
// 10.L     = Integer + Decimal            + Suffix = long double
// .25      =           Decimal + Fraction          = double
// .25f     =           Decimal + Fraction + Suffix = float
// .25F     =           Decimal + Fraction + Suffix = float
// .25l     =           Decimal + Fraction + Suffix = long double
// .25L     =           Decimal + Fraction + Suffix = long double

// Exponential (Scientific) Floating Point Literals:
// Written with exponent part, digits and a decimal point.
// Must have an integer part, or a decimal point with a fractional part, or both before the exponent (e/E).
// Exponential (scientific) form can be written as:
// Integer part + Decimal point + Fractional part + Exponent part
// Decimal point + Fractional part + Exponent part
// Integer part + Exponent part
// Can optionally have a suffix to specify type.
// Examples:
// 2.5e3    = Integer + Decimal + Fraction + Exponent part          = double
// 2.5e3f   = Integer + Decimal + Fraction + Exponent part + Suffix = float
// 2.5e3F   = Integer + Decimal + Fraction + Exponent part + Suffix = float
// 2.5e3l   = Integer + Decimal + Fraction + Exponent part + Suffix = long double
// 2.5e3L   = Integer + Decimal + Fraction + Exponent part + Suffix = long double
// 3.14E+2  = Integer + Decimal + Fraction + Exponent part          = double
// 3.14E+2f = Integer + Decimal + Fraction + Exponent part + Suffix = float
// 3.14E+2F = Integer + Decimal + Fraction + Exponent part + Suffix = float
// 3.14E+2l = Integer + Decimal + Fraction + Exponent part + Suffix = long double
// 3.14E+2L = Integer + Decimal + Fraction + Exponent part + Suffix = long double
// 0.5E1    = Integer + Decimal + Fraction + Exponent part          = double
// 0.5E1f   = Integer + Decimal + Fraction + Exponent part + Suffix = float
// 0.5E1F   = Integer + Decimal + Fraction + Exponent part + Suffix = float
// 0.5E1l   = Integer + Decimal + Fraction + Exponent part + Suffix = long double
// 0.5E1L   = Integer + Decimal + Fraction + Exponent part + Suffix = long double
// .5e3     =           Decimal + Fraction + Exponent part          = double
// .5e3f    =           Decimal + Fraction + Exponent part + Suffix = float
// .5e3F    =           Decimal + Fraction + Exponent part + Suffix = float
// .5e3l    =           Decimal + Fraction + Exponent part + Suffix = long double
// .5e3L    =           Decimal + Fraction + Exponent part + Suffix = long double
// .11E-2   =           Decimal + Fraction + Exponent part          = double
// .11E-2f  =           Decimal + Fraction + Exponent part + Suffix = float
// .11E-2F  =           Decimal + Fraction + Exponent part + Suffix = float
// .11E-2l  =           Decimal + Fraction + Exponent part + Suffix = long double
// .11E-2L  =           Decimal + Fraction + Exponent part + Suffix = long double
// 1e-2     = Integer                      + Exponent part          = double
// 1e-2f    = Integer                      + Exponent part + Suffix = float
// 1e-2F    = Integer                      + Exponent part + Suffix = float
// 1e-2l    = Integer                      + Exponent part + Suffix = long double
// 1e-2L    = Integer                      + Exponent part + Suffix = long double
// 1E3      = Integer                      + Exponent part          = double
// 1E3f     = Integer                      + Exponent part + Suffix = float
// 1E3F     = Integer                      + Exponent part + Suffix = float
// 1E3l     = Integer                      + Exponent part + Suffix = long double
// 1E3L     = Integer                      + Exponent part + Suffix = long double

// Sizes and Ranges (Typical Values):

// On most 32-bit and 64-bit systems (IEEE-754):
// float        = 32 bits,         Approx. Range: ±3.4e±38,   Precision: ~7     decimal digits
// double       = 64 bits,         Approx. Range: ±1.7e±308,  Precision: ~15    decimal digits
// long double  = 80 bits (x86),   Approx. Range: ±1.1e±4932, Precision: ~18–19 decimal digits
//                128 bits (quad), Approx. Range: ±1.1e±4932, Precision: ~33–36 decimal digits
//                (on Windows MSVC, long double = double, same as above)

// The exact size of long double is implementation dependent.
// On many 64-bit Unix systems, long double = 80 bits (extended precision).
// On Windows (MSVC), long double is the same as double (64 bits).