#include <iostream>

class Box {
public:
    // Default constructor
    Box() : width(0.0), height(0.0), depth(0.0) {}

    // Parameterized constructor 1
    Box(double w, double h, double d) : width(w), height(h), depth(d) {}

    // Parameterized constructor 2 (for a cube)
    Box(double len) : width(len), height(len), depth(len) {}

    // Method to calculate volume
    double volume() const {
        return width * height * depth;
    }

private:
    double width;
    double height;
    double depth;
};

int main() {
     
    double w1, h1, d1;
    std::cin >> w1 >> h1 >> d1;

    double len;
    std::cin >> len;

 
    Box mybox1(0, 0, 0);
    Box mybox2(w1, h1, d1);
    Box mycube(len);
 
    std::cout << "Volume of mybox1 is " << mybox1.volume() << '\n';
    std::cout << "Volume of mybox2 is " << mybox2.volume() << '\n';
    std::cout << "Volume of mycube is " << mycube.volume() << '\n';

    return 0;
}
