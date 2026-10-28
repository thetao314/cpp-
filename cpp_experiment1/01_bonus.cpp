#include <iomanip>
#include <iostream>
using namespace std;
int main() {
    double profit;
    cout << "Enter profit (yuan): ";
    if (!(cin >> profit) || profit < 0) { cout << "Invalid profit." << endl; return 1; }
    double bonus = 0.0;
    if (profit > 1000000) { bonus += (profit - 1000000) * 0.01; profit = 1000000; }
    if (profit > 600000) { bonus += (profit - 600000) * 0.015; profit = 600000; }
    if (profit > 400000) { bonus += (profit - 400000) * 0.03; profit = 400000; }
    if (profit > 200000) { bonus += (profit - 200000) * 0.05; profit = 200000; }
    if (profit > 100000) { bonus += (profit - 100000) * 0.075; profit = 100000; }
    bonus += profit * 0.10;
    cout << fixed << setprecision(2) << "Bonus: " << bonus << " yuan" << endl;
    return 0;
}