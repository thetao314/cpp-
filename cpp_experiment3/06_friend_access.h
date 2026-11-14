#ifndef FRIEND_ACCESS_H
#define FRIEND_ACCESS_H

class X;

class Y {
public:
    void g(X* object) const;
};

class Z;
void h(X* object);

class X {
private:
    int i;
    friend void Y::g(X* object) const;
    friend class Z;
    friend void h(X* object);

public:
    explicit X(int value = 0) : i(value) {}
    int value() const { return i; }
};

class Z {
public:
    void f(X* object) const;
};

#endif
