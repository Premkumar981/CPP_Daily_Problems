#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int* numbers = new int[100]; // Dynamic allocation of an integer array

    int num, sum = 0, count = 0;
    cin >> num;

    // Read and store positive integers until a negative value is entered
    while (num >= 0) {
        numbers[count] = num;
        sum += num;
        count++;
        cin >> num;
    }

    // Display the entered numbers
    cout << "Numbers entered: ";
    for (int i = 0; i < count; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // Display the sum of the numbers
    cout << "Sum of entered numbers: " << sum << endl;

    // Display the average of the numbers
    cout << "Average of entered numbers: " << fixed << setprecision(2) << static_cast<double>(sum) / count << endl;

    delete[] numbers; // Free the dynamically allocated memory

    return 0;
}

