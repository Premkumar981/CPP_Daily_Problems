#include <iostream>
#include <string>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;
    std::cin.ignore();

    std::string** studentNames = new std::string*[N];

    for (int i = 0; i < N; i++) {
        studentNames[i] = new std::string;
        std::getline(std::cin, *studentNames[i]);
    }

    // Sort the names in ascending order
    std::sort(studentNames, studentNames + N, [](const std::string* a, const std::string* b) {
        return *a < *b;
    });

    // Print the sorted names separated by a space
    for (int i = 0; i < N; i++) {
        std::cout << *studentNames[i] << " ";
    }

    // Deallocate memory
    for (int i = 0; i < N; i++) {
        delete studentNames[i];
    }
    delete[] studentNames;

    return 0;
}

