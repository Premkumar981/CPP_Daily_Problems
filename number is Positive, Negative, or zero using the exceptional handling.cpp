#include <iostream>

class PositiveException : public std::exception {
public:
    const char* what() const throw() {
        return "PositiveException";
    }
};

class NegativeException : public std::exception {
public:
    const char* what() const throw() {
        return "NegativeException";
    }
};

int main() {
    int number;
    std::cin >> number;

    try {
        if (number > 0) {
            throw PositiveException();
        } else if (number < 0) {
            throw NegativeException();
        }
        std::cout << "You Entered Zero" << std::endl;
    } catch (PositiveException& e) {
        std::cout << "You Entered Positive number" << std::endl;
    } catch (NegativeException& e) {
        std::cout << "You Entered Negative number" << std::endl;
    }

    return 0;
}

