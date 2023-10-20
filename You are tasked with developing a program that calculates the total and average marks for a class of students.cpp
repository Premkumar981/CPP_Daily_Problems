#include <iostream>
#include <string>
using namespace std;

class Marks {
protected:
    static int roll_number;
    int physics, chemistry, mathematics;
    string name;
    int total_marks;

public:
    Marks(string n, int p, int c, int m) : name(n), physics(p), chemistry(c), mathematics(m) {
        roll_number++;
        total_marks = physics + chemistry + mathematics;
    }

    void display() {
        cout << "Roll Number: " << roll_number << " Name: " << name << " Total marks: " << total_marks << endl;
    }

    int get_total_marks() {
        return total_marks;
    }

    static void display_class_stats(int total_marks_class, int num_students) {
        double average_marks = static_cast<double>(total_marks_class) / num_students;
        cout << "Total marks of the class is: " << total_marks_class << endl;
        cout << "The average marks of the class is: " << average_marks << endl;
    }
};

int Marks::roll_number = 0;

class Physics : public Marks {
public:
    Physics(string n, int p, int c, int m) : Marks(n, p, c, m) {}
};

int main() {
    int n;
    cin >> n;

    int total_marks_class = 0;

    for (int i = 0; i < n; i++) {
        string name;
        int p, c, m;
        cin >> name >> p >> c >> m;

        Physics physics_student(name, p, c, m);
        total_marks_class += physics_student.get_total_marks();
        physics_student.display();
    }

    Marks::display_class_stats(total_marks_class, n);

    return 0;
}

