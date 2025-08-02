// An integer literal{Literals.cpp} can be a decimal, octal, or hexadecimal constant{Constants.cpp}.
// A prefix specifies the base or radix: 0x or 0X for hexadecimal, 0 for octal, and nothing for decimal.
// Types of integer literals based on base (radix):

// Decimal (Base 10): Regular numbers with digits 0–9.
// Examples: 212, 215

// Octal (Base 8): Numbers that start with a 0 and use digits 0–7 only.
// Examples: 012, 702

// Hexadecimal (Base 16): Numbers that start with 0x or 0X, using digits 0–9 and A–F (case-insensitive).
// Examples: 0xFee, 0XeFF,0x12CcbB

// An integer literal can also have a suffix.
// No suffix (default) = signed // Integer literals are signed by default, meaning they can represent both positive and negative values.
// U  = unsigned                // No negative numbers, doubles the maximum positive range.
// L  = long
// LL = long long

// The suffix can be uppercase or lowercase (case-insensitive) and can be written in any order.
// Examples:
// UL, Ul, uL, ul, LU, Lu, lU, lu, LLU, LLu, Llu, lLU, llU, ULL, ULl, Ull, uLL, ulL, ull

// Sizes and Ranges (Typical Values):

// On 32-bit systems (ILP32 model):
// int                = 32 bits, Range: -2,147,483,648 to +2,147,483,647
// unsigned int       = 32 bits, Range: 0 to 4,294,967,295
// long               = 32 bits, Range: -2,147,483,648 to +2,147,483,647
// unsigned long      = 32 bits, Range: 0 to 4,294,967,295
// long long          = 64 bits, Range: -9,223,372,036,854,775,808 to +9,223,372,036,854,775,807
// unsigned long long = 64 bits, Range: 0 to 18,446,744,073,709,551,615
// Here, long 32 bits, but long long is 64 bits.

// On 64-bit Linux/Unix (LP64 model):
// int                = 32 bits, Range: -2,147,483,648 to +2,147,483,647
// unsigned int       = 32 bits, Range: 0 to 4,294,967,295
// long               = 64 bits, Range: -9,223,372,036,854,775,808 to +9,223,372,036,854,775,807
// unsigned long      = 64 bits, Range: 0 to 18,446,744,073,709,551,615
// long long          = 64 bits, Range: -9,223,372,036,854,775,808 to +9,223,372,036,854,775,807
// unsigned long long = 64 bits, Range: 0 to 18,446,744,073,709,551,615
// Here, both long & long long is 64 bits.

// On 64-bit Windows (LLP64 model):
// int         = 32 bits, Range: -2,147,483,648 to +2,147,483,647
// unsigned int= 32 bits, Range: 0 to 4,294,967,295
// long        = 32 bits, Range: -2,147,483,648 to +2,147,483,647
// unsigned long= 32 bits, Range: 0 to 4,294,967,295
// long long   = 64 bits, Range: -9,223,372,036,854,775,808 to +9,223,372,036,854,775,807
// unsigned long long= 64 bits, Range: 0 to 18,446,744,073,709,551,615
// On Windows, long is usually 32 bits. We need long long for 64-bit integers.

// How much wider a long is compared to an int depends on the platform and compiler.
// But there are standard rules defined by the C/C++ language.
// sizeof(short) <= sizeof(int) <= sizeof(long) <= sizeof(long long)
// The actual bit-width depends on the platform.
// long is an integer type that is guaranteed to be at least 32 bits, but can be 64 bits on some platforms.
// long long is an integer type that is guaranteed to be at least 64 bits.