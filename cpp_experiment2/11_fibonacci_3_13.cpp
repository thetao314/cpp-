#include <iostream>
long long fibonacci(int n) {
    if (n <= 2) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
    int n;
    std::cin >> n;
    if (n < 1 || n > 40) {
        std::cerr << "n must be between 1 and 40\n";
        return 1;
    }
    std::cout << "F(" << n << ") = " << fibonacci(n) << '\n';
}
