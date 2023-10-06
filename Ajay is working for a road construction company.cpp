#include <iostream>
#include <iomanip>

class Distance {
private:
    double kilometers;
    double miles;

public:
    Distance(double km) {
        kilometers = km;
        miles = km * 0.621371;
    }

    void display() {
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "Kilometers: " << kilometers << " km" << std::endl;
        std::cout << "Miles: " << miles << " miles" << std::endl;
    }
};

int main() {
    double km;
    std::cin >> km;

    Distance dist(km);
    dist.display();

    return 0;
}

