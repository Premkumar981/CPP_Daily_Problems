#include <iostream>
#include <exception>

class NegativeRadiusException : public std::exception {
public:
    const char* what() const throw() {
        return "NegativeRadiusException";
    }
};

class Circle {
private:
    double radius;

public:
    Circle() {
        radius = 0.0;
    }

    void setRadius(double r) {
        if (r <= 0.0) {
            throw NegativeRadiusException();
        }
        radius = r;
    }

    double getRadius() {
        return radius;
    }
};

int main() {
    double inputRadius;
    Circle circle;

    try {
        std::cin >> inputRadius;
        circle.setRadius(inputRadius);
        std::cout << "Radius set successfully: " << circle.getRadius() << std::endl;
    } catch (NegativeRadiusException& e) {
        std::cout << "Exception caught. Error: Radius cannot be negative or zero." << std::endl;
    }

    return 0;
}

