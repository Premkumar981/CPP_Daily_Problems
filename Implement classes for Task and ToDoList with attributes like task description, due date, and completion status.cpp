#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Task {
public:
    string description;
    string dueDate;
    int completionStatus;

    Task(string desc, string date, int status) {
        description = desc;
        dueDate = date;
        completionStatus = status;
    }
};

class ToDoList {
public:
    vector<Task> tasks;

    void addTask(Task task) {
        tasks.push_back(task);
    }

    void displayIncompleteTasks() {
        for (const Task& task : tasks) {
            if (task.completionStatus == 0) {
                cout << task.description << endl;
            }
        }
    }
};

int main() {
    int n;
    cin >> n;
    cin.ignore(); // Consume the newline character after n

    ToDoList toDoList;

    for (int i = 0; i < n; i++) {
        string desc, date;
        int status;
        getline(cin, desc);
        getline(cin, date);
        cin >> status;
        cin.ignore(); // Consume the newline character after status

        Task task(desc, date, status);
        toDoList.addTask(task);
    }

    toDoList.displayIncompleteTasks();

    return 0;
}

