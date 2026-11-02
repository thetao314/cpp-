#include <iostream>
int add(int x, int y) { return x + y; }
int add(int x, int y, int z) { return x + y + z; }
int main() {
    std::cout << "add(3,4) = " << add(3, 4) << '\n';
    std::cout << "add(3,4,5) = " << add(3, 4, 5) << '\n';
}
