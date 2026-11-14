#include <iostream>

class Cat {
private:
    static int numOfCats;

public:
    Cat() {
        ++numOfCats;
    }

    ~Cat() {
        --numOfCats;
    }

    static int getNumOfCats() {
        return numOfCats;
    }
};

int Cat::numOfCats = 0;

int main() {
    std::cout << "Cats before construction: " << Cat::getNumOfCats() << '\n';
    Cat cat1;
    Cat cat2;
    std::cout << "Cats after two objects: " << Cat::getNumOfCats() << '\n';
    {
        Cat cat3;
        std::cout << "Cats inside nested scope: " << Cat::getNumOfCats() << '\n';
    }
    std::cout << "Cats after nested scope: " << Cat::getNumOfCats() << '\n';
    return 0;
}
