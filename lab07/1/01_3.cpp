#include <iostream>

int main() {
    int x = 10, y = 9;
    if (x > y++ && y++ > 9)
        std::cout << "yes" << std::endl;
    std::cout << y << std::endl;
    return 0;
}