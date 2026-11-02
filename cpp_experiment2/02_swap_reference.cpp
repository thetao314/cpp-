#include <iostream>
void swapValues(int& a, int& b) {
    if (&a == &b) return;
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int a, b;
    std::cin >> a >> b;
    swapValues(a, a);
    std::cout << "after swap(a,a): " << a << ' ' << b << '\n';
    swapValues(a, b);
    std::cout << "after swap(a,b): " << a << ' ' << b << '\n';
}
