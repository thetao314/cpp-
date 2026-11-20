#include <cctype>
#include <iostream>
#include <string>

int countLetters(const std::string& sentence) {
    int count = 0;
    for (unsigned char ch : sentence) {
        if (std::isalpha(ch))
            ++count;
    }
    return count;
}

int main() {
    std::string sentence;
    std::cout << "Enter an English sentence: ";
    std::getline(std::cin, sentence);
    std::cout << "Letter count: " << countLetters(sentence) << '\n';
    return 0;
}
