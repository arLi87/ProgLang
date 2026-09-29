#include <iostream>

void check(int x, int y, int z) {
    bool res = ((x == y) + (x == z) == true);
    std::cout << "x=" << x << ", y=" << y << ", z=" << z << " => " << (res ? "true" : "false") << std::endl;
}

int main() {
    check(1, 1, 2);
    check(1, 2, 1);
    check(1, 1, 1);
    check(1, 2, 3);
    return 0;
}