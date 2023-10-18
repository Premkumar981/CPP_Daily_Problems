#include <iostream>
#include <string>
using namespace std;

class Parent {
public:
    Parent() {
        cout << "Parent constructor" << endl;
    }

    ~Parent() {
        cout << "Parent destructor" << endl;
    }
};

class Child1 : public Parent {
public:
    Child1(int value) {
        cout << "Child1 constructor: " << value << endl;
    }

    ~Child1() {
        cout << "Child1 destructor" << endl;
    }
};

class Child2 : public Parent {
public:
    Child2(float value) {
        cout << "Child2 constructor: " << value << endl;
    }

    ~Child2() {
        cout << "Child2 destructor" << endl;
    }
};

class Child3 : public Parent {
public:
    Child3(const string& value) {
        cout << "Child3 constructor: " << value << endl;
    }

    ~Child3() {
        cout << "Child3 destructor" << endl;
    }
};

int main() {
    int a;
    cin >> a;
    float b;
    cin >> b;
    cin.ignore();
    string c;
    getline(cin, c);

    Child1 child1(a);
    Child2 child2(b);
    Child3 child3(c);

    return 0;
}

