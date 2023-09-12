#include <iostream>

class Date {
public:
    int day;
    int month;
    int year;

    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    void displayDate() {
        std::cout << "The date is " << day << "/" << month << "/" << year << std::endl;
    }
};

int main() {
    int day, month, year;

    // Input for day, month, and year
    std::cin >> day >> month >> year;

    // Create a Date object using a pointer
    Date *birthday = new Date(day, month, year);

    // Display the collected birthday data
    birthday->displayDate();

    // Free the memory occupied by the Date object
    delete birthday;

    return 0;
}

