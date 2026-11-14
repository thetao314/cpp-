#include <iostream>

class Ctype {
private:
    int a;
    static int s;

public:
    explicit Ctype(int x = 0) : a(x) {
        ++s;
    }

    void Print() const {
        std::cout << "a = " << a << ", shared object count = " << s << '\n';
    }
};

int Ctype::s = 0;

int main() {
    Ctype c1;
    Ctype c2(8);
    Ctype c3(15);

    c1.Print();
    c2.Print();
    c3.Print();
    return 0;
}
