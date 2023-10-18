#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int birthYear;
    int currentYear;

public:
    Person(string n, int by, int cy) : name(n), birthYear(by), currentYear(cy) {}

    // Conversion operator to calculate the age
operator int() {
        return currentYear - birthYear;
    }

    // Function to display the age
    void displayAge() {
        int age = static_cast<int>(*this);
        cout << "Age: " << age << " years" << endl;
    }

    // Getter function for birth year
    int getBirthYear() {
        return birthYear;
    }
};

int main() {
    string name;
    int birthYear, currentYear;

    cin >> name >> birthYear >> currentYear;

    Person person(name, birthYear, currentYear);

    person.displayAge();

    return 0;
}

