#include <iostream>

int main() {
    int x = 1;
    int y = 5;

    (x++) = y;

    std::cout << "x = " << x << std::endl;

    return 0;
}