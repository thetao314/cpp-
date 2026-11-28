#include <iostream>
class Base {
protected: int a;
public: Base():a(0) {} explicit Base(int i):a(i) {}
};
class Derived : public Base {
    int b;
public:
    Derived():b(0) {}
    explicit Derived(int i):b(i) {}
    void print() const { std::cout << "a=" << a << ",b=" << b << '\n'; }
};
int main() { Derived d1, d2(12); d1.print(); d2.print(); }
