#include <iostream>
class A {
    int a;
public: explicit A(int i):a(i) { std::cout << "A Constructor\n"; }
    void disp() const { std::cout << "a=" << a << '\n'; }
    ~A() { std::cout << "A Destructor\n"; }
};
class B {
    int b;
public: explicit B(int i):b(i) { std::cout << "B Constructor\n"; }
    void disp() const { std::cout << "b=" << b << '\n'; }
    ~B() { std::cout << "B Destructor\n"; }
};
class C : public B, public A {
    int c;
public: explicit C(int k):B(k-2),A(k+2),c(k) { std::cout << "C Constructor\n"; }
    void disp() const { A::disp(); B::disp(); std::cout << "c=" << c << '\n'; }
    ~C() { std::cout << "C Destructor\n"; }
};
int main() { C obj(10); obj.disp(); }
