#include <iostream>
int fact(int n) {
    int result = 1;
    while (n > 1) result *= n--;
    return result;
}
int main() {
    std::cout << "5! = " << fact(5) << '\n';
}
