#include <iostream>
int getPower(int x, int y) {
    if (y < 0) return 0;
    if (y == 0) return 1;
    return x * getPower(x, y - 1);
}
double getPower(double x, int y) {
    if (y == 0) return 1.0;
    if (y < 0) return 1.0 / (x * getPower(x, -(y + 1)));
    return x * getPower(x, y - 1);
}
int main() {
    int a, m;
    double b;
    std::cin >> a >> b >> m;
    if (!std::cin || (m < 0 && b == 0.0) || m < -1000 || m > 1000) {
        std::cerr << "invalid input\n";
        return 1;
    }
    std::cout << "integer power = " << getPower(a, m) << '\n';
    std::cout << "real power = " << getPower(b, m) << '\n';
    if (m >= 0 || a != 0)
        std::cout << "integer base as real = " << getPower(static_cast<double>(a), m) << '\n';
}
