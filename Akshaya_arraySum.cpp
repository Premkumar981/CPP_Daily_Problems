#include <iostream>

template<class T>
T arraySum(T arr[], int n) {
    T sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n;
    std::cin >> n;

    int intArray[n];
    float floatArray[n];

    for (int i = 0; i < n; i++) {
        std::cin >> intArray[i];
    }

    for (int i = 0; i < n; i++) {
        std::cin >> floatArray[i];
    }

    int intSum = arraySum(intArray, n);
    float floatSum = arraySum(floatArray, n);

    std::cout << "Sum of integer array: " << intSum << std::endl;
    std::cout << "Sum of floating-point array: " << floatSum << std::endl;

    return 0;
}
