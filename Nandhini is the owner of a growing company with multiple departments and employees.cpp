#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string pname;
    string address;
    int phone_no;
};

class Employee : public Person {
public:
    int eno;
    string ename;
};

class Manager : public Employee {
public:
    string designation;
    string deptname;
    float basic_salary;

    void accept_details() {
        cin >> eno >> ename >> address >> phone_no >> deptname >> basic_salary;
    }
};

int main() {
    int cnt;
    cin >> cnt;

    Manager m[cnt];

    for (int i = 0; i < cnt; i++) {
        m[i].accept_details();
    }

    float max_salary = 0;
    string max_name;

    for (int i = 0; i < cnt; i++) {
        if (m[i].basic_salary > max_salary) {
            max_salary = m[i].basic_salary;
            max_name = m[i].ename;
        }
    }

    cout << "Manager with Highest Salary is : " << max_salary << endl;
    cout << "Manager Name is : " << max_name << endl;

    return 0;
}

