#include <iostream>

class Ctype {
private:
    int a;
    static int s;

public:
    Ctype() : a(0) {
        ++s;
        std::cout << "constructed object: a = " << ++a << '\n';
    }

    static void Print() {
        std::cout << "static s = " << s << '\n';
    }
};

int Ctype::s = 0;

int main() {
    Ctype::Print();
    Ctype c1, c2;
    c1.Print();
    c2.Print();
    Ctype c3;
    c3.Print();
    return 0;
}
