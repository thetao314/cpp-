#include <iostream>
using namespace std;
int main() {
    const int months = 20;
    long long previous = 1, current = 1;
    cout << "Month 1: 1 pair, 2 rabbits" << endl;
    for (int month = 2; month <= months; ++month) {
        if (month > 2) { long long next = previous + current; previous = current; current = next; }
        cout << "Month " << month << ": " << current << " pairs, " << current * 2 << " rabbits" << endl;
    }
    return 0;
}