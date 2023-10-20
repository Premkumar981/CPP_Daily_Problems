#include <iostream>

class Parent {
private:
    void m1() {
        std::cout << "From parent m1()" << std::endl;
    }

    void m2(int a) {
        std::cout << a << std::endl;
    }

public:
    void m1Public() {
        m1();
    }

    void m2Public(int a) {
        m2(a);
    }
};

class Child : private Parent {
public:
    void m1Child() {
        std::cout << "From child m1()" << std::endl;
    }

    void m2Child(int b) {
        m2Public(b);
    }
};

int main() {
    int a, b;
    //std::cout << "Enter two integers: ";
    std::cin >> a >> b;

    Parent parent;
    Child child;

    parent.m1Public();
    parent.m2Public(a);

    child.m1Child();
    child.m2Child(b);

    return 0;
}

