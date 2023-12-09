#include <iostream>
using namespace std;

int main() {
    int n, initialTerm, commonDifference;
    cin >> n >> initialTerm >> commonDifference;

    // Dynamically allocate memory for the array
    int* progression = new int[n];

    // Calculate and store the terms of the arithmetic progression
    for (int i = 0; i < n; i++) {
        progression[i] = initialTerm + (i * commonDifference);
    }

    // Calculate the sum of the arithmetic progression
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += progression[i];
    }

    // Display the sum of the arithmetic progression
    cout << sum << endl;

    // Free the dynamically allocated memory
    delete[] progression;

    return 0;
}

