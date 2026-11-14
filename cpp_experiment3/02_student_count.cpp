#include <iostream>

class Student {
private:
    static int count;
    int studentNo;

public:
    Student() : studentNo(++count) {}

    void Print() const {
        std::cout << "Student" << studentNo << ", count = " << count << '\n';
    }
};

int Student::count = 0;

int main() {
    Student student1;
    student1.Print();
    std::cout << "----------\n";

    Student student2;
    student1.Print();
    student2.Print();
    std::cout << "----------\n";

    Student student3;
    student1.Print();
    student2.Print();
    student3.Print();
    return 0;
}
