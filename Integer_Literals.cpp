// An integer literal{Literals.cpp} can be a decimal, octal, or hexadecimal constant{Constants.cpp}.
// Types of integer literals based on base (radix):

// Decimal (Base 10):
// Prefix: None
// Digits: 0–9
// Examples:
// 42  in decimal =          4*10^1 + 2*10^0 =         4*10 + 2*1 =       40 + 2 = 42
// 212 in decimal = 2*10^2 + 1*10^1 + 2*10^0 = 2*100 + 1*10 + 2*1 = 200 + 10 + 2 = 212
// 215 in decimal = 2*10^2 + 1*10^1 + 5*10^0 = 2*100 + 1*10 + 5*1 = 200 + 10 + 5 = 215

// Octal (Base 8):
// Prefix: 0
// Digits: 0–7
// Representation of binary using 3-bit chunks.
// Examples:
// 052, 012, 0702

// Hexadecimal (Base 16):
// Prefix: 0x or 0X
// Digits: 0–9 and A–F (case-insensitive, where A=10, B=11, C=12, D=13, E=14, F=15)
// Representation of binary using 4-bit chunks.
// Examples:
// 0x2A, 0xFee, 0xEFF

// Binary (Base 2):
// Prefix: 0b or 0B
// Digits: 0 and 1
// Examples:
// 0b101010, 0b1101, 0B11111111


// Number Base Conversions:
// The exponent rule says: "Any non-zero number raised to the power of 0 is 1".

// Octal (base 8) >> Decimal (base 10):
// Multiply each octal digit by 8^(position), starting from rightmost digit multiplied by 8^0, the next by 8^1, and so on.
// Examples:
// 052  in octal =         5*8^1 + 2*8^0 =        5*8 + 2*1 =      40 + 2   = 42  in decimal
// 012  in octal =         1*8^1 + 2*8^0 =        1*8 + 2*1 =       8 + 2   = 10  in decimal
// 0702 in octal = 7*8^2 + 0*8^1 + 2*8^0 = 7*64 + 0*8 + 2*1 = 448 + 0 + 2   = 450 in decimal

// Hexadecimal (base 16) >> Decimal (base 10):
// Multiply each hexadecimal digit by 16^(position), starting from rightmost digit multiplied by 16^0, the next by 16^1, and so on.
// Here letters A=10, B=11, C=12, D=13, E=14, F=15.
// Examples:
// 0x2A  in hex =            2*16^1 + 10*16^0 =           2*16 + 10*1 =         32 + 10 = 42   in decimal
// 0xFee in hex = 15*16^2 + 14*16^1 + 14*16^0 = 15*256 + 14*16 + 14*1 = 3840 + 224 + 14 = 4078 in decimal
// 0xEFF in hex = 14*16^2 + 15*16^1 + 15*16^0 = 14*256 + 15*16 + 15*1 = 3584 + 240 + 15 = 3839 in decimal

// Binary (base 2) >> Decimal (base 10):
// Multiply each octal digit by 2^(position), starting from rightmost digit multiplied by 8^0, the next by 8^1, and so on.
// Examples:
// 0b101010   in binary =                 1*2^5 + 0*2^4 + 1*2^3 + 0*2^2 + 1*2^1 + 0*2^0 =            32 +  0 + 8 + 0 + 2 + 0 = 42  in decimal
// 0b1101     in binary =                                 1*2^3 + 1*2^2 + 0*2^1 + 1*2^0 =                      8 + 4 + 0 + 1 = 13  in decimal
// 0B11111111 in binary = 1*2^7 + 1*2^6 + 1*2^5 + 1*2^4 + 1*2^3 + 1*2^2 + 1*2^1 + 1*2^0 = 128 + 64 + 32 + 16 + 8 + 4 + 2 + 1 = 255 in decimal

// Decimal (base 10) >> Octal (base 8):
// Divide the decimal number by 8 (ocatal base).
// Write down the remainder.
// Divide the quotient obtained in step 1 by 8 (ocatal base) again.
// Repeat steps until the quotient becomes 0.
// The octal number is the remainders read from bottom to top (reverse).
// Example: 42 in decimal
// 42 / 8 = 5 remainder 2
// 5  / 8 = 0 remainder 5
// Read the remainders from bottom to top (reverse) = 52 (octal)

// Decimal (base 10) >> Hexadecimal (base 16):
// Divide the decimal number by 16 (hexadecimal base).
// Write down the remainder.
// Divide the quotient obtained in step 1 by 16 (hexadecimal base) again.
// Repeat steps until the quotient becomes 0.
// Convert remainders to hexadecimal digit (0–F) where 10=A, 11=B, 12=C, 13=D, 14=E, 15=F
// The hexadecimal number is the remainders read from bottom to top (reverse).
// Example: 42 in decimal
// 42 / 16 = 2 remainder 10 = A
// 2  / 16 = 0 remainder 2
// Read the remainders from bottom to top (reverse) = 2A (hexadecimal).

// Decimal (base 10) >> Binary (base 2):
// Divide the decimal number by 2 (binary base).
// Write down the remainder.
// Divide the quotient obtained in step 1 by 2 (binary base) again.
// Repeat steps until the quotient becomes 0.
// The binary number is the remainders read from bottom to top (reverse).
// Example: 42 in decimal
// 42 / 2 = 21 remainder 0
// 21 / 2 = 10 remainder 1
// 10 / 2 = 5  remainder 0
// 5  / 2 = 2  remainder 1
// 2  / 2 = 1  remainder 0
// 1  / 2 = 0  remainder 1
// Read the remainders from bottom to top (reverse) = 101010 (binary)

// Binary (Base 2) >> Octal (base 8):
// Every group of 3 binary bits/digits corresponds to exactly 1 octal digit.
// Convert each 3-bit binary group to its octal equivalent, starting from the right. (Add leading zeros if necessary to make a full group of 3 bits)
// All 3-bit binary group and their corresponding octal digit (0–7) equivalents:
// 000 = 0, 001 = 1, 010 = 2, 011 = 3, 100 = 4, 101 = 5, 110 = 6,111 = 7
// The octal number is the equivalents joined together.
// Example: 10101111 in binary
// Split into 3-bit binary group: 010 (added leading zero), 101, 111
// Convert each 3-bit binary group to its octal equivalent:
// 010 = 2
// 101 = 5
// 111 = 7
// Join them together = 257 (octal)

// Binary (Base 2) >> Hexadecimal (base 16):
// Every group of 4 binary bits/digits corresponds to exactly 1 hexadecimal digit.
// Convert each 4-bit binary group to its hexadecimal equivalent, starting from the right. (Add leading zeros if necessary to make a full group of 4 bits)
// All 4-bit binary group and their corresponding hexadecimal digit (0–F) equivalents:
// 0000 = 0, 0001 = 1, 0010 = 2, 0011 = 3, 0100 = 4, 0101 = 5, 0110 = 6, 0111 = 7, 1000 = 8, 1001 = 9, 1010 = A, 1011 = B, 1100 = C, 1101 = D, 1110 = E, 1111 = F
// The hexadecimal number is the equivalents joined together.
// Example: 101010 in binary
// Split into 4-bit binary group: 0010 (added leading zeros), 1010
// Convert each 4-bit binary group to its hexadecimal equivalent:
// 0010 = 2
// 1010 = A
// Join them together = 2A (hexadecimal)

// 001 101 111 → 0001 1011 111 (add a leading zero to make groups of 4) → 0001 1011 111
// Wait, better if we write binary fully:
// 1 = 001 → 3 bits, 5 = 101, 7 = 111
// So combined binary: 001 101 111 → 9 bits total
// Pad to left to make multiples of 4 bits:
// Add 3 zeros → 0000 0110 1111
// Group as: 0000 | 0110 | 1111
// Step 3: Convert groups to hex:
// 0000 → 0
// 0110 → 6
// 1111 → F

// Octal (base 8) >> Binary (Base 2):
// Each octal digit corresponds to exactly 3 binary bits/digits.
// Convert each octal digit to its 3-bit binary equivalent.
// All octal digits (0–7) and their corresponding 3-bit binary equivalents:
// 0 = 000, 1 = 001, 2 = 010, 3 = 011, 4 = 100, 5 = 101, 6 = 110, 7 = 111
// The binary number is the equivalents joined together.
// Example: 527 in octal
// Split into octal digits: 5, 2, 7
// Convert each octal digit to its 3-bit binary equivalent:
// 5 = 101
// 2 = 010
// 7 = 111
// Join them together = 101010111 (binary)

// Hexadecimal (base 16) >> Binary (Base 2):
// Each hexadecimal digit corresponds to exactly 4 binary bits/digits.
// Convert each hexadecimal digit to its 4-bit binary equivalent.
// All hexadecimal digits (0–F) and their corresponding 4-bit binary equivalents:
// 0 = 0000, 1 = 0001, 2 = 0010, 3 = 0011, 4 = 0100, 5 = 0101, 6 = 0110, 7 = 0111, 8 = 1000, 9 = 1001, A = 1010, B = 1011, C = 1100, D = 1101, E = 1110, F = 1111
// The binary number is the equivalents joined together.
// Example: 2A in hexadecimal
// Split into hexadecimal digits: 2, A
// Convert each hexadecimal digit to its 4-bit binary equivalent:
// 2 = 0010
// A = 1010
// Join them together = 00101010 = 101010 (binary)

// Octal (base 8) >> Hexadecimal (base 16):
// First convert octal to either in binary or decimal as an intermediate step, then convert it into hexadecimal.

// Hexadecimal (base 16) >> Octal (base 8):
// First convert hexadecimal to either in binary or decimal as an intermediate step, then convert it into Octal.


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