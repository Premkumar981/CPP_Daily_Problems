#include <iostream>
using namespace std;

class Professor {
private:
    int id;
    int salary;

public:
    Professor(int id = 0, int salary = 0) {
        this->id = id;
        this->salary = salary;
    }

    void display() {
        cout << id << " " << salary << endl;
    }

    int getSalary() {
        return salary;
    }
};

int main() {
    int N;
    cin >> N;

    Professor professors[N];

    for (int i = 0; i < N; i++) {
        int id, salary;
        cin >> id >> salary;
        professors[i] = Professor(id, salary);
    }

    for (int i = 0; i < N; i++) {
        if (professors[i].getSalary() >= 20000) {
            professors[i].display();
        }
    }

    return 0;
}

