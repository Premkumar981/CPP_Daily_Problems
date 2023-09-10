#include <iostream>
#include <string>

class Employee {
public:
    int ID;
    std::string name;
    int salary;

    void inputData(int id, const std::string& empName, int empSalary) {
        ID = id;
        name = empName;
        salary = empSalary;
    }

    void displayData(int employeeNumber) {
        std::cout << "Employee " << employeeNumber << " Details:" << std::endl;
        std::cout << "ID: " << ID << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Salary: " << salary << std::endl;
    }
};

int main() {
    Employee emp1, emp2;

    // Input for employee 1
    int id1, salary1;
    std::string name1;
    std::cin >> id1 >> name1 >> salary1;
    emp1.inputData(id1, name1, salary1);

    // Input for employee 2
    int id2, salary2;
    std::string name2;
    std::cin >> id2 >> name2 >> salary2;
    emp2.inputData(id2, name2, salary2);

    // Display employee details
    emp1.displayData(1);
    emp2.displayData(2);

    return 0;
}

