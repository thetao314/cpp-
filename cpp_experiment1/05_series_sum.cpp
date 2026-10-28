#include <iostream>
using namespace std;
int main() {
    int n, a;
    cout << "Enter n and a (a is one digit): ";
    if (!(cin >> n >> a) || n <= 0 || a < 0 || a > 9) { cout << "Invalid input." << endl; return 1; }
    long long term = 0, sum = 0;
    for (int i = 1; i <= n; ++i) { term = term * 10 + a; sum += term; }
    cout << "Sum: " << sum << endl;
    return 0;
}