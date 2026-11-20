#include <iomanip>
#include <iostream>

class SimpleCircle {
private:
    int* itsRadius;

public:
    explicit SimpleCircle(int radius = 0) : itsRadius(new int(radius < 0 ? 0 : radius)) {}

    SimpleCircle(const SimpleCircle& other) : itsRadius(new int(*other.itsRadius)) {}

    SimpleCircle& operator=(const SimpleCircle& other) {
        if (this != &other)
            *itsRadius = *other.itsRadius;
        return *this;
    }

    ~SimpleCircle() {
        delete itsRadius;
    }

    void setRadius(int radius) {
        *itsRadius = radius < 0 ? 0 : radius;
    }

    int getRadius() const {
        return *itsRadius;
    }

    double area() const {
        const double pi = 3.141592653589793;
        return pi * (*itsRadius) * (*itsRadius);
    }
};

int main() {
    SimpleCircle circle(5);
    std::cout << "radius = " << circle.getRadius() << '\n';
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "area = " << circle.area() << '\n';

    SimpleCircle copy = circle;
    copy.setRadius(3);
    std::cout << "copied circle radius = " << copy.getRadius() << '\n';
    std::cout << "original circle radius = " << circle.getRadius() << '\n';
    return 0;
}
