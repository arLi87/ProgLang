#include <iostream>
#include <typeinfo>

int main() {
    bool x = true, y = false;

    auto a = x & y;
    std::cout << "a type: " << typeid(a).name() << std::endl;

    auto b = x && y;
    std::cout << "b type: " << typeid(b).name() << std::endl;

    return 0;
}