#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string make, model;
    int year;

public:
    void setMake(string m) {
        make = m;
    }
    void setModel(string m) {
        model = m;
    }
    void setYear(int y) {
        year = y;
    }
    string getMake() {
        return make;
    }
    string getModel() {
        return model;
    }
    int getYear() {
        return year;
    }

    virtual int findSpeed() {
        return 0;
    }
};

class SportsCar : public Car {
private:
    int maxSpeed;

public:
    SportsCar(int speed) : maxSpeed(speed) {}
    int findSpeed() override {
        return maxSpeed;
    }
};

int main() {
    Car car;
    string make, model;
    int year;
    int speed;
    getline(cin, make);
    getline(cin, model);
    cin >> year;
    cin >> speed;
    car.setMake(make);
    car.setModel(model);
    car.setYear(year);
    cout << "Make of the car is: " << car.getMake() << endl;
    cout << "Model of the car is: " << car.getModel() << endl;
    cout << "Year of the car is: " << car.getYear() << endl;
    SportsCar sportsCar(speed);
    cout << "Speed of the sports car is: " << sportsCar.findSpeed() << " km/h" << endl;
    return 0;
}
