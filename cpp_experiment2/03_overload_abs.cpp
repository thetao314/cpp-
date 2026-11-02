#include <iostream>
int absolute(int x) { return x < 0 ? -x : x; }
double absolute(double x) { return x < 0 ? -x : x; }
long absolute(long x) { return x < 0 ? -x : x; }
int main() {
    std::cout << "int: " << absolute(-4) << '\n';
    std::cout << "double: " << absolute(-5.5) << '\n';
    std::cout << "long: " << absolute(-6L) << '\n';
}
