#include <iostream>

using namespace std;




class Demo {

private:

int num1, num2;




public:

Demo(int n1, int n2) : num1(n1), num2(n2) {

cout << "Inside Demo Constructor" << endl;

}




int getNum1() const {

return num1;

}




int getNum2() const {

return num2;

}




virtual void display() {

cout << "Number 1: " << num1 << endl;

cout << "Number 2: " << num2 << endl;

}




virtual ~Demo() {

cout << "Inside Demo Destructor";

}

};




class Derived : public Demo {

public:

Derived(int n1, int n2) : Demo(n1, n2) {

cout << "Inside Derived Constructor" << endl;

}




void display() override {

cout << "Derived - Number 1: " << getNum1() << endl;

cout << "Derived - Number 2: " << getNum2() << endl;

}




~Derived() override {

cout << "Inside Derived Destructor" << endl;

}

};




int main() {

int n1, n2;

cin >> n1 >> n2;




Demo* obj = new Derived(n1, n2);

obj->display();




delete obj;




return 0;

} 
