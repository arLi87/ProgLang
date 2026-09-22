#include <iostream>
#include <cmath>

int square(int x) {
    return x * x;
}

int main() {
    int val = 5;
    // Здесь скобки после square и abs являются ОПЕРАТОРОМ вызова функции:
    int res1 = square(val); 
    double res2 = std::abs(-10.5);
    return 0;
}