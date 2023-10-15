#include <iostream>

class Vehicle {
protected:
    float distance;

public:
    void getDistance() {
        std::cin >> distance;
    }

    virtual void calculateSpeed() = 0;
};

class Car : public Vehicle {
private:
    float time;

public:
    void getTime() {
        std::cin >> time;
    }

    void calculateSpeed() {
        float speed = distance / time;
        std::cout << "Speed of car: " << speed << " km/hr" << std::endl;
    }
};

int main() {
    Car car;

    car.getDistance();
    car.getTime();
    car.calculateSpeed();

    return 0;
}

