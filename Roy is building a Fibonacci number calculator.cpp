#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 1) {
        cout << "Number of Fibonacci numbers should be positive!" << endl;
        return 0;
    }

    if (n == 1) {
        cout << "Fibonacci Sequence: 0" << endl;
        return 0;
    }

    int* fibonacci = new int[n];
    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for (int i = 2; i < n; i++) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    cout << "Fibonacci Sequence:";
    for (int i = 0; i < n; i++) {
        cout << " " << fibonacci[i];
    }
    cout << endl;

    delete[] fibonacci;

    return 0;
}

