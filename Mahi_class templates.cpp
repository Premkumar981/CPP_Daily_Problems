#include <iostream>
#include <vector>

template <class T>
class ArrayPrinter {
private:
    std::vector<T> elements;

public:
    ArrayPrinter(int size) {
        elements.resize(size);
    }

    void readInput() {
        for (int i = 0; i < elements.size(); i++) {
            std::cin >> elements[i];
        }
    }

    void printOddPositions() {
        for (int i = 0; i < elements.size(); i += 2) {
            std::cout << elements[i] << " ";
        }
        std::cout << std::endl;
    }
};

template <>
void ArrayPrinter<std::string>::printOddPositions() {
    for (int i = 0; i < elements.size(); i += 2) {
        std::cout << elements[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int n;
    std::cin >> n;

    ArrayPrinter<int> intArray(n);
    intArray.readInput();
    intArray.printOddPositions();

    ArrayPrinter<std::string> stringArray(n);
    stringArray.readInput();
    stringArray.printOddPositions();

    return 0;
}
