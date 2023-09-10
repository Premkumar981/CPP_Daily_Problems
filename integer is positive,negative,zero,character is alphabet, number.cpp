#include <iostream>

int main() {
    int n;
    char c;

    std::cin >> n >> c;

    if (n > 0) {
        std::cout << "The number is positive." << std::endl;
    } else if (n < 0) {
        std::cout << "The number is negative." << std::endl;
    } else {
        std::cout << "The number is zero." << std::endl;
    }

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        std::cout << "The character is an alphabet." << std::endl;
    } else if (c >= '0' && c <= '9') {
        std::cout << "The character is a number." << std::endl;
    } else {
        std::cout << "The character is not a number or an alphabet." << std::endl;
    }

    return 0;
}

