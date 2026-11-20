#include <iostream>
#include <string>

void reverseRange(std::string& s, std::size_t left, std::size_t right) {
    if (left >= right)
        return;
    char temp = s[left];
    s[left] = s[right];
    s[right] = temp;
    reverseRange(s, left + 1, right - 1);
}

void reverse(std::string& s) {
    if (!s.empty())
        reverseRange(s, 0, s.size() - 1);
}

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);
    reverse(s);
    std::cout << "Reversed string: " << s << '\n';
    return 0;
}
