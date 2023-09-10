#include <iostream>

class Rectangle {
public:
    int width;
    int height;

    int getArea() {
        return width * height;
    }
};

int main() {
    Rectangle rect1, rect2;

    // Input for rectangle 1
    std::cin >> rect1.width >> rect1.height;

    // Input for rectangle 2
    std::cin >> rect2.width >> rect2.height;

    // Calculate areas
    int area1 = rect1.getArea();
    int area2 = rect2.getArea();

    // Output areas
    std::cout << "Area of rect1: " << area1 << std::endl;
    std::cout << "Area of rect2: " << area2 << std::endl;

    // Compare dimensions
    if (rect1.width == rect2.width && rect1.height == rect2.height) {
        std::cout << "rect1 and rect2 have the same dimensions." << std::endl;
    } else {
        std::cout << "rect1 and rect2 have different dimensions." << std::endl;
    }

    return 0;
}

