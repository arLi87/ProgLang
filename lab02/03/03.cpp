#include <iostream>

int main() {
    int a = 1, b = 2;
    int c = a+++b;
    std::cout << "c = " << c << ", a = " << a << ", b = " << b << std::endl;
    return 0;
}