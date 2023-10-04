#include <iostream>
#include <iomanip>

using namespace std;

class Student {
    int rollNumber;
    double fee;
public:
    Student(int r, double f) : rollNumber(r), fee(f) {}
    Student(const Student& s) : rollNumber(s.rollNumber), fee(s.fee) {}
    int getRollNumber() const { return rollNumber; }
    double getFee() const { return fee; }
};

int main() {
    int rollNumber;
    double fee;
    cin >> rollNumber >> fee;
    Student s(rollNumber, fee);
    cout << "Student Details:" << endl;
    cout << s.getRollNumber() << " " << fixed << setprecision(2) << s.getFee() << endl;
    Student sCopy(s);
    cout << "Copied Student Details:" << endl;
    cout << sCopy.getRollNumber() << " " << fixed << setprecision(2) << sCopy.getFee() << endl;
    return 0;
}
