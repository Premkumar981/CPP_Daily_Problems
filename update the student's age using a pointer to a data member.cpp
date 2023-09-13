#include <iostream>
#include <string>

class Student {
public:
    std::string name;
    int age;

    Student(const std::string& studentName, int studentAge) : name(studentName), age(studentAge) {}

    void updateAge(int newAge) {
        age = newAge;
    }

    int getCurrentAge() {
        return age;
    }
};

int main() {
    std::string studentName;
    int currentAge, newAge;

    // Input the student's name
    std::getline(std::cin, studentName);

    // Input the current age of the student
    std::cin >> currentAge;

    // Input the new age to be updated
    std::cin >> newAge;

    // Create a Student object
    Student student(studentName, currentAge);

    // Display the current age of the student
    std::cout << "Current age: " << student.getCurrentAge() << std::endl;

    // Update the age of the student
    student.updateAge(newAge);

    // Display the updated age of the student
    std::cout << "Updated age: " << student.getCurrentAge() << std::endl;

    return 0;
}

