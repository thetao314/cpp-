#include <iostream>
struct Base1 { int x; };
struct Base2 { float y; };
struct Derived : Base1, Base2 {};
int main() {
    Derived* pd = new Derived;
    pd->x = 1; pd->y = 2.0f;
    Base2* pb = static_cast<Base2*>(pd);
    std::cout << "Derived y = " << pd->y << ", Base2 y = " << pb->y << '\n';
    delete pd;
}
