#include <iostream>

int main() {
    int a = 5, b = 10;
    a, b = b, a;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    return 0;
}