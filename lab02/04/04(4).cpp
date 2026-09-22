#include <iostream>

int main() {
    // 1. Объявление размера массива (НЕ оператор):
    int arr[10]; 

    // 2. Список захвата в лямбда-выражении (НЕ оператор):
    auto lambda = []() { 
        std::cout << "Hello from Russia!"; 
    };

    lambda();
    return 0;
}