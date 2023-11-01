#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    virtual double calculateRentalCost(int numDays) = 0;
};

class EconomyCar : public Car {
public:
    virtual double calculateRentalCost(int numDays) override {
        const double ECONOMY_RATE = 40.0;
        return ECONOMY_RATE * numDays;
    }
};

class CompactCar : public Car {
public:
    virtual double calculateRentalCost(int numDays) override {
        const double COMPACT_RATE = 50.0;
        return COMPACT_RATE * numDays;
    }
};

class StandardCar : public Car {
public:
    virtual double calculateRentalCost(int numDays) override {
        const double STANDARD_RATE = 60.0;
        return STANDARD_RATE * numDays;
    }
};

int main() {
    int numDays;
    string carType = "Economy";
    cin >> numDays;
    cin >> carType;

    Car* car = nullptr;

    if (carType == "Economy") {
        car = new EconomyCar();
    } else if (carType == "Compact") {
        car = new CompactCar();
    } else if (carType == "Standard") {
        car = new StandardCar();
    } else {
        cout << "Invalid car type." << endl;
        return 0;
    }

    double rentalCost = car->calculateRentalCost(numDays);
    delete car;

    cout << "The total cost of the rental is $" << rentalCost << endl;

    return 0;
}
