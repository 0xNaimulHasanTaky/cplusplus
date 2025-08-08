// An integer literal{Literals.cpp} can be a decimal, octal, or hexadecimal constant{Constants.cpp}.
// Types of integer literals based on base (radix):

// Decimal (Base 10):
// Prefix: None
// Digits: 0–9
// Each digit represents a power of 10, with the rightmost digit multiplied by 10^0, the next by 10^1, and so on.
// Examples:
// 42  in decimal =          4*10^1 + 2*10^0 =         4*10 + 2*1 =       40 + 2 = 42
// 212 in decimal = 2*10^2 + 1*10^1 + 2*10^0 = 2*100 + 1*10 + 2*1 = 200 + 10 + 2 = 212
// 215 in decimal = 2*10^2 + 1*10^1 + 5*10^0 = 2*100 + 1*10 + 5*1 = 200 + 10 + 5 = 215

// Octal (Base 8):
// Prefix: 0
// Digits: 0–7
// Each digit represents a power of 8, with the rightmost digit multiplied by 8^0, the next by 8^1, and so on.
// Representation of binary in 3-bit chunks (e.g., 111 111 = 77 in octal).
// Examples:
// 052  in octal =         5*8^1 + 2*8^0 =        5*8 + 2*1 =      40 + 2   = 42  in decimal
// 012  in octal =         1*8^1 + 2*8^0 =        1*8 + 2*1 =       8 + 2   = 10  in decimal
// 0702 in octal = 7*8^2 + 0*8^1 + 2*8^0 = 7*64 + 0*8 + 2*1 = 448 + 0 + 2   = 450 in decimal

// Hexadecimal (Base 16):
// Prefix: 0x or 0X
// Digits: 0–9 and A–F (case-insensitive, where A=10, B=11, C=12, D=13, E=14, F=15)
// Each digit represents a power of 16, with the rightmost digit multiplied by 16^0, the next by 16^1, and so on.
// Representation of binary using 4-bit chunks (1111 = F).
// Examples:
// 0x2A     in hex =            2*16^1 + 10*16^0 =           2*16 + 10*1 =         32 + 10 = 42   in decimal
// 0xFee    in hex = 15*16^2 + 14*16^1 + 14*16^0 = 15*256 + 14*16 + 14*1 = 3840 + 224 + 14 = 4078 in decimal
// 0xEFF    in hex = 14*16^2 + 15*16^1 + 15*16^0 = 14*256 + 15*16 + 15*1 = 3584 + 240 + 15 = 3839 in decimal

// Binary (Base 2):
// Prefix: 0b or 0B
// Digits: 0 and 1
// Each digit represents a power of 2, with the rightmost digit multiplied by 2^0, the next by 2^1, and so on.
// Examples:
// 0b101010   in binary =                 1*2^5 + 0*2^4 + 1*2^3 + 0*2^2 + 1*2^1 + 0*2^0 =            32 +  0 + 8 + 0 + 2 + 0 = 42  in decimal
// 0b1101     in binary =                                 1*2^3 + 1*2^2 + 0*2^1 + 1*2^0 =                      8 + 4 + 0 + 1 = 13  in decimal
// 0B11111111 in binary = 1*2^7 + 1*2^6 + 1*2^5 + 1*2^4 + 1*2^3 + 1*2^2 + 1*2^1 + 1*2^0 = 128 + 64 + 32 + 16 + 8 + 4 + 2 + 1 = 255 in decimal

// Each digit represents a power of base, with the rightmost digit multiplied by base^0, the next by base^1, and so on.
// The exponent rule says: "Any non-zero number raised to the power of 0 is 1".

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
// int                = 32 bits, Range: -2,147,483,648 to +2,147,483,647
// unsigned int       = 32 bits, Range: 0 to 4,294,967,295
// long               = 32 bits, Range: -2,147,483,648 to +2,147,483,647
// unsigned long      = 32 bits, Range: 0 to 4,294,967,295
// long long          = 64 bits, Range: -9,223,372,036,854,775,808 to +9,223,372,036,854,775,807
// unsigned long long = 64 bits, Range: 0 to 18,446,744,073,709,551,615
// On Windows, long is usually 32 bits. We need long long for 64-bit integers.

// How much wider a long is compared to an int depends on the platform and compiler.
// But there are standard rules defined by the C++ language.
// sizeof(short) <= sizeof(int) <= sizeof(long) <= sizeof(long long)
// The actual bit-width depends on the platform.
// long is an integer type that is guaranteed to be at least 32 bits, but can be 64 bits on some platforms.
// long long is an integer type that is guaranteed to be at least 64 bits.