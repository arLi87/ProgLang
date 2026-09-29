#include <iostream>

// 1. typedef - псевдоним для большого беззнакового типа
typedef unsigned long long uint64;

int main() {
    uint64 big_num = 10000000000ULL; 

    auto pi = 3.14159; 

    int x = 10;
    decltype(x) y = 20; 

    int sum = 15, count = 4;
    double avg = static_cast<double>(sum) / count; 

    std::cout << "big_num = " << big_num << std::endl;
    std::cout << "sizeof(big_num): " << sizeof(big_num) << " bytes\n";
    std::cout << "avg = " << avg << std::endl;

    return 0;
}