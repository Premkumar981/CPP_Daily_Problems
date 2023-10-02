#include <iostream>
#include <iomanip>

class Height {
private:
    int feet;
    double inches;

public:
    // Default constructor
    Height() : feet(0), inches(0.0) {}

    // Method to set height in various formats
    void setHeight(int f, double i) {
        feet = f;
        inches = i;
    }

    // Method to display height
    void show() {
        std::cout << "Feet=" << feet << " inches=" << std::setprecision(3) << inches << std::endl;
    }
};

int main() {
    // Create three instances of the Height class using the default constructor
    Height h1, h2, h3;

    // Read input for h1 in feet format
    int feet1;
    std::cin >> feet1;
    h1.setHeight(feet1, 0.0);

    // Read input for h2 in feet and fraction format
    double feet2;
    std::cin >> feet2;
    h2.setHeight(static_cast<int>(feet2), (feet2 - static_cast<int>(feet2)) * 12.0);

    // Read input for h3 in feet and inches format
    int feet3;
    double inches3;
    std::cin >> feet3 >> inches3;
    h3.setHeight(feet3, inches3);

    // Display heights
    h1.show();
    h2.show();
    h3.show();

    return 0;
}

