#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    // Constructor to initialize employee details
    Employee(string empName, int empID, double empSalary) {
        name = empName;
        employeeID = empID;
        salary = empSalary;
    }

    // Function to update salary
    void updateSalary(double newSalary) {
        salary = newSalary;
    }

    // Function to display employee information
    void displayInfo() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: " << salary << endl;
    }

    // Getters for name, employeeID, and salary
    string getName() const {
        return name;
    }

    int getEmployeeID() const {
        return employeeID;
    }

    double getSalary() const {
        return salary;
    }
};

int main() {
    int numEmployees;
    cin >> numEmployees;

    Employee* employees[numEmployees];

    // Input employee details and store them in the array
    for (int i = 0; i < numEmployees; i++) {
        string name;
        int empID;
        double salary;

        cin.ignore();
        getline(cin, name);

        cin >> empID;

        cin >> salary;

        employees[i] = new Employee(name, empID, salary);
    }

    // Find the highest paid employee
    double maxSalary = employees[0]->getSalary();
    int maxIndex = 0;
    for (int i = 1; i < numEmployees; i++) {
        if (employees[i]->getSalary() > maxSalary) {
            maxSalary = employees[i]->getSalary();
            maxIndex = i;
        }
    }

   // cout << "Details of the highest paid employee:\n";
    employees[maxIndex]->displayInfo();

    // Deallocate memory
    for (int i = 0; i < numEmployees; i++) {
        delete employees[i];
    }

    return 0;
}
