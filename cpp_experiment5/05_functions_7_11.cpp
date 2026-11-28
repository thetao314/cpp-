#include <iostream>
class BaseClass { public: void fn1() { std::cout << "BaseClass::fn1\n"; }
    virtual void fn2() { std::cout << "BaseClass::fn2\n"; } virtual ~BaseClass() {} };
class DerivedClass : public BaseClass { public: void fn1() { std::cout << "DerivedClass::fn1\n"; }
    void fn2() override { std::cout << "DerivedClass::fn2\n"; } };
int main() { DerivedClass d; BaseClass* b=&d; DerivedClass* p=&d;
    std::cout << "object:\n"; d.fn1(); d.fn2();
    std::cout << "base pointer:\n"; b->fn1(); b->fn2();
    std::cout << "derived pointer:\n"; p->fn1(); p->fn2(); }
