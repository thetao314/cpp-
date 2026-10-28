#include <iostream>
using namespace std;
int main() {
    cout << "Three-digit narcissistic numbers: ";
    for (int number = 100; number <= 999; ++number) {
        int hundreds = number / 100, tens = number / 10 % 10, ones = number % 10;
        if (hundreds * hundreds * hundreds + tens * tens * tens + ones * ones * ones == number) cout << number << ' ';
    }
    cout << endl;
    return 0;
}