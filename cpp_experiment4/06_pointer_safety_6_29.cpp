#include <iostream>

int main() {
    std::cout << "The original reinterpret_cast<double*> write is undefined behavior.\n";
    std::cout << "It may violate alignment, strict aliasing, and array bounds.\n";

    int arr[] = {1, 2, 3};
    int* p = &arr[0];
    *p = 5;

    std::cout << "Safe result: " << arr[0] << ' ' << arr[1] << ' ' << arr[2] << '\n';
    return 0;
}
