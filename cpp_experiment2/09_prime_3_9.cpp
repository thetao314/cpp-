#include <iostream>
bool isPrime(int n) {
    if (n < 2) return false;
    for (int divisor = 2; divisor <= n / divisor; ++divisor)
        if (n % divisor == 0) return false;
    return true;
}
int main() {
    int n;
    std::cin >> n;
    std::cout << n << (isPrime(n) ? " is prime\n" : " is not prime\n");
}
