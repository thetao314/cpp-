#include <iostream>
class Shape { public: virtual ~Shape() {} virtual double getArea() const = 0; };
class Rectangle : public Shape {
protected: double width, height;
public: Rectangle(double w,double h):width(w),height(h) {}
    double getArea() const override { return width * height; }
};
class Circle : public Shape {
    double radius;
public: explicit Circle(double r):radius(r) {}
    double getArea() const override { return 3.141592653589793 * radius * radius; }
};
class Square : public Rectangle { public: explicit Square(double side):Rectangle(side,side) {} };
int main() { Rectangle r(4,5); Circle c(2); Square s(3);
    std::cout << "Rectangle: " << r.getArea() << "\nCircle: " << c.getArea() << "\nSquare: " << s.getArea() << '\n'; }
