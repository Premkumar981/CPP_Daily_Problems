#include <iostream>
#include <cstring>

int countWords(const char* sentence) {
    int count = 0;
    const char* delimiters = " \t\n.,!?";

    const char* token = strtok(const_cast<char*>(sentence), delimiters);

    while (token != nullptr) {
        count++;
        token = strtok(nullptr, delimiters);
    }

    return count;
}

int main() {
    const int bufferSize = 1000;
    char input[bufferSize];

    std::cin.getline(input, bufferSize);

    int wordCount = countWords(input);

    std::cout << wordCount << std::endl;

    return 0;
}

