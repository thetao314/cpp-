#include <iostream>
int sumTo(int n = 10) {
    int sum = 0;
    for (int i = 1; i <= n; ++i) sum += i;
    return sum;
}
int main() {
    std::cout << "sumTo(100) = " << sumTo(100) << '\n';
    std::cout << "sumTo() = " << sumTo() << '\n';
}
