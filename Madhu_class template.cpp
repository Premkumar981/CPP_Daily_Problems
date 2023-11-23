#include <iostream>

template <typename T>
class Pair {
private:
    T first;
    T second;

public:
    Pair(T first, T second) : first(first), second(second) {}

    void swap() {
        T temp = first;
        first = second;
        second = temp;
    }

    void displayValues() {
        std::cout << "Values before swap:" << std::endl;
        std::cout << "First: " << first << std::endl;
        std::cout << "Second: " << second << std::endl;

        swap();

        std::cout << "Values after swap:" << std::endl;
        std::cout << "First: " << first << std::endl;
        std::cout << "Second: " << second << std::endl;
    }
};

int main() {
    float floatValue;
    double doubleValue;

    std::cin >> floatValue;
    std::cin >> doubleValue;

    Pair<float> pair(floatValue, doubleValue);
    pair.displayValues();

    return 0;
}
