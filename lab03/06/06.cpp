#include <iostream>

void test_int() {
    int a = -1, b = 1;
    unsigned int c = 1;
    std::cout << "int * int: " << a * b << std::endl;
    std::cout << "int * unsigned int: " << a * c << std::endl;
}

void test_short() {
    short a = -1, b = 1;
    unsigned short c = 1;
    std::cout << "short * short: " << a * b << std::endl;
    std::cout << "short * unsigned short: " << a * c << std::endl;
}

int main() {
    test_int();
    test_short();
    return 0;
}