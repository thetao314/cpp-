#include <iostream>

int main() {
    int value = 9;
    int* p = &value;

    std::cout << "the value at p: " << *p << '\n';
    return 0;
}
