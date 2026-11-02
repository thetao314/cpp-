#include <iomanip>
#include <iostream>
inline double circleArea(double radius) { return 3.1416 * radius * radius; }
int main() {
    std::cout << std::fixed << std::setprecision(4);
    for (int r = 1; r <= 3; ++r)
        std::cout << "r=" << r << ", area=" << circleArea(r) << '\n';
}
