#include <iostream>
using namespace std;

class Parent {
public:
    int num;

    Parent(int n) : num(n) {}

    // Default constructor
    Parent() {}

    // Setter for num
    void setNum(int n) {
        num = n;
    }
};

class Child : public Parent {
public:
    // Constructor to initialize the base class
    Child(int n) : Parent(n) {}

    // Function to calculate the sum of all possible pairs of digits
int fun() {
    int sum = 0;
    int originalNum = num;

    if (originalNum < 10) {
        // If the number has only one digit, return that digit itself
        return originalNum;
    }

    // Iterate through each digit of the number
    while (originalNum > 0) {
        int digit1 = originalNum % 10;
        int newNum = originalNum / 10;

        // Calculate the sum of the digit pairs
        while (newNum > 0) {
            int digit2 = newNum % 10;
            sum += digit1 + digit2;
            newNum /= 10;
        }

        originalNum /= 10;
    }

    return sum;
}
};

int main() {
    int number;
    cin >> number;

    Child child(number);
    int result = child.fun();

    cout << result << endl;

    return 0;
}

