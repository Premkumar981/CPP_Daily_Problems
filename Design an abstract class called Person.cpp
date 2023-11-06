#include <iostream>

#include <string>

#include <iomanip> // for std::setprecision




using namespace std;




// Abstract class representing a generic person

class Person {

protected:

string name;

int age;




public:

Person(const string& name, int age) : name(name), age(age) {}




// Abstract method for displaying personal information

virtual void displayInformation() = 0;




// Abstract method for calculating salary

virtual double calculateSalary() = 0;

};




// Derived class representing a faculty member

class Faculty : public Person {

private:

double teachingHours;

double hourlyRate;




public:

Faculty(const string& name, int age, double teachingHours, double hourlyRate)

: Person(name, age), teachingHours(teachingHours), hourlyRate(hourlyRate) {}




// Override method to display faculty information

void displayInformation() override {

cout << "Faculty Information:" << endl;

cout << "Name: " << name << endl;

cout << "Age: " << age << endl;

cout << "Teaching Hours: " << teachingHours << endl;

}




// Override method to calculate faculty salary

double calculateSalary() override {

return teachingHours * hourlyRate;

}

};




// Derived class representing a staff member

class Staff : public Person {

private:

double monthlyPay;




public:

Staff(const string& name, int age, double monthlyPay)

: Person(name, age), monthlyPay(monthlyPay) {}




// Override method to display staff information

void displayInformation() override {

cout << "Staff Information:" << endl;

cout << "Name: " << name << endl;

cout << "Age: " << age << endl;

}




// Override method to calculate staff salary

double calculateSalary() override {

return monthlyPay;

}

};




int main() {

string name;

int age;

double teachingHours, hourlyRate, monthlyPay;




// Get faculty information from the user

getline(cin, name);

cin >> age;

cin >> teachingHours;

cin >> hourlyRate;

cin.ignore(); // Ignore the newline character in the input buffer




// Create a faculty object

Faculty faculty(name, age, teachingHours, hourlyRate);




// Get staff information from the user

getline(cin, name);

cin >> age;

cin >> monthlyPay;

cin.ignore(); // Ignore the newline character in the input buffer




// Create a staff object

Staff staff(name, age, monthlyPay);




// Display faculty information and salary

faculty.displayInformation();

cout << fixed << setprecision(2); // Set precision to two decimal places

cout << "Salary: " << faculty.calculateSalary() << endl;

cout << endl;




// Display staff information and salary

staff.displayInformation();

cout << "Salary: " << staff.calculateSalary();




return 0;

} 
