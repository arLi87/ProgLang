#include <iostream>

int main() {
    int x1 = 1, y1 = 2, z1 = 0;
    z1 += 2 * (++x1) + 3 * (y1++);
    std::cout << "W1: " << x1 << " " << y1 << " " << z1 << std::endl;

    int x2 = 1, y2 = 2, z2 = 0;
    ++x2, z2 += 2 * x2 + 3 * y2, ++y2;
    std::cout << "W2: " << x2 << " " << y2 << " " << z2 << std::endl;

    int x3 = 1, y3 = 2, z3 = 0;
    z3 += 2 * (x3 += 1) + 3 * ((y3 += 1) - 1);
    std::cout << "W3: " << x3 << " " << y3 << " " << z3 << std::endl;

    return 0;
}