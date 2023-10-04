#include <iostream>
using namespace std;

class Customer {
    int customerNumber;

public:
    Customer(int number) {
        customerNumber = number;
        cout << "Created " << customerNumber << endl;
    }

    ~Customer() {
        cout << "Destroyed " << customerNumber << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of customers in the queue: ";
    cin >> n;

    Customer *customerQueue[n];

    for (int i = 0; i < n; i++) {
        customerQueue[i] = new Customer(i + 1);
    }

    for (int i = n - 2; i >= 0; i--) {
        delete customerQueue[i];
    }

    cout << "Destroyed 0" << endl;

    return 0;
}

