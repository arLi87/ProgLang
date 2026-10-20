#include <iostream>

namespace BasicMath {
    int calculate(int a, int b) {
        return a + b;
    }
}

namespace AdvancedMath {
    int calculate(int a, int b) {
        return a * b;
    }
}

int main() {
    int x = 5, y = 4;
    std::cout << "Sum: " << BasicMath::calculate(x, y) << std::endl;
    std::cout << "Product: " << AdvancedMath::calculate(x, y) << std::endl;
    return 0;
}