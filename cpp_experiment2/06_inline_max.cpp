#include <iostream>
inline int maximum(int x, int y) { return x > y ? x : y; }
int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << "maximum = " << maximum(a, b) << '\n';
}
