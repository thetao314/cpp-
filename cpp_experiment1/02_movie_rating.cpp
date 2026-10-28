#include <iostream>
using namespace std;
int main() {
    int score;
    cout << "Enter movie score (0-10): ";
    if (!(cin >> score) || score < 0 || score > 10) { cout << "Invalid score." << endl; return 1; }
    if (score >= 9) cout << "You think the movie is classic." << endl;
    else if (score >= 7) cout << "You think the movie is very good." << endl;
    else if (score >= 5) cout << "You think the movie is average." << endl;
    else cout << "You think the movie is bad." << endl;
    return 0;
}