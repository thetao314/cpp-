#include <iostream>
long long gcd(long long a, long long b) {
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b != 0) {
        long long remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}
long long lcm(long long a, long long b) {
    if (a == 0 || b == 0) return 0;
    long long result = (a / gcd(a, b)) * b;
    return result < 0 ? -result : result;
}
int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << "gcd = " << gcd(a, b) << '\n';
    std::cout << "lcm = " << lcm(a, b) << '\n';
}
