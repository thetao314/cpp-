#include <climits>
#include <iostream>
short divide(unsigned short numerator, unsigned short denominator) {
    if (denominator == 0) return -1;
    return static_cast<short>(numerator / denominator);
}
int main() {
    unsigned int a, b;
    std::cin >> a >> b;
    if (a > USHRT_MAX || b > USHRT_MAX) {
        std::cerr << "input out of unsigned short range\n";
        return 1;
    }
    if (b != 0 && a / b > SHRT_MAX) {
        std::cerr << "quotient out of short range\n";
        return 1;
    }
    std::cout << "result = " << divide(static_cast<unsigned short>(a), static_cast<unsigned short>(b)) << '\n';
}
