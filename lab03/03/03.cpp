#include <iostream>

int main() {
    int x = 5;
    if (x) { // C++ неявно преобразует int в bool (ненулевое -> true)
        std::cout << "C++: int in if is valid" << std::endl;
    }

    bool b = true;
    int num = b; // C++ неявно преобразует bool в int (true -> 1)
    std::cout << "C++: bool to int = " << num << std::endl;

    return 0;
}