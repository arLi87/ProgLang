#include <iostream>

int main() {
    // 1. Десятичные литералы
    int dec_signed = -42;
    unsigned int dec_unsigned = 42U;

    // 2. Восьмеричные литералы (начинаются с 0)
    int oct_val = 052; // 5*8 + 2 = 42

    // 3. Шестнадцатеричные литералы (начинаются с 0x или 0X)
    int hex_val = 0x2A; // 2*16 + 10 = 42
    unsigned int hex_upper = 0XFFU;

    // 4. Двоичные литералы (C++14, начинаются с 0b или 0B)
    int bin_val = 0b00101010; // 42

    // 5. Литералы разной длины с суффиксами (L, LL, U, UL, ULL)
    long long_val = 100000L;
    unsigned long ulong_val = 100000UL;
    long long llong_val = 9000000000000000000LL;
    unsigned long long ullong_val = 18000000000000000000ULL;

    std::cout << dec_signed << " " << dec_unsigned << " " << oct_val << " "
              << hex_val << " " << bin_val << " " << llong_val << std::endl;

    return 0;
}