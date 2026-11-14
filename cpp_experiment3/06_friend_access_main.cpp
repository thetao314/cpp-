#include <iostream>
#include "06_friend_access.h"

int main() {
    X object;
    Y y;
    Z z;

    std::cout << "Initial value: " << object.value() << '\n';
    y.g(&object);
    std::cout << "After Y::g: " << object.value() << '\n';
    z.f(&object);
    std::cout << "After Z::f: " << object.value() << '\n';
    h(&object);
    std::cout << "After h: " << object.value() << '\n';
    return 0;
}
