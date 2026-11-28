#include <iostream>
class B1 { public: explicit B1(int i) { std::cout << "constructing B1 " << i << '\n'; } };
class B2 { public: explicit B2(int i) { std::cout << "constructing B2 " << i << '\n'; } };
class B3 { public: B3() { std::cout << "constructing B3 *\n"; } };
class C : public B2, public B1, public B3 {
    B1 memberB1; B2 memberB2; B3 memberB3;
public: C(int a,int b,int c,int d):B2(b),B1(a),B3(),memberB1(c),memberB2(d),memberB3() {}
};
int main() { C obj(1,2,3,4); }
