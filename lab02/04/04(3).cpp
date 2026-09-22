#include <iostream>
#include <vector>

int main() {
    int numbers[3] = {10, 20, 30};
    std::vector<int> vec = {1, 2, 3};

    // Здесь скобки являются ОПЕРАТОРОМ индексации:
    int first = numbers[0]; 
    vec[1] = 50; 
    return 0;
}