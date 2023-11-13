#include <iostream>
#include <vector>

template<class T>
T dotProduct(const std::vector<T>& v1, const std::vector<T>& v2) {
    T result = 0;
    for (size_t i = 0; i < v1.size(); i++) {
        result += v1[i] * v2[i];
    }
    return result;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> intVector1(n);
    std::vector<int> intVector2(n);
    std::vector<float> floatVector1(n);
    std::vector<float> floatVector2(n);

    for (int i = 0; i < n; i++) {
        std::cin >> intVector1[i];
    }
    for (int i = 0; i < n; i++) {
        std::cin >> intVector2[i];
    }
    for (int i = 0; i < n; i++) {
        std::cin >> floatVector1[i];
    }
    for (int i = 0; i < n; i++) {
        std::cin >> floatVector2[i];
    }

    int intDotProduct = dotProduct(intVector1, intVector2);
    float floatDotProduct = dotProduct(floatVector1, floatVector2);

    std::cout << "Dot product of integer vectors: " << intDotProduct << std::endl;
    std::cout << "Dot product of floating-point vectors: " << floatDotProduct << std::endl;

    return 0;
}

