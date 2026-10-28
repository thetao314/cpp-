#include <iostream>
using namespace std;
int main() {
    long long number, original, reversed = 0;
    cout << "Enter a non-negative integer: ";
    if (!(cin >> number) || number < 0) { cout << "Invalid input." << endl; return 1; }
    original = number;
    do { reversed = reversed * 10 + number % 10; number /= 10; } while (number != 0);
    cout << original << (original == reversed ? " is" : " is not") << " a palindrome." << endl;
    return 0;
}