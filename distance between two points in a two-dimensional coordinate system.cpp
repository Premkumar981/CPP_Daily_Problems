#include <iostream>
#include <cmath>
#include <iomanip>

class Point {
public:
    double x;
    double y;

    Point(double xCoord, double yCoord) : x(xCoord), y(yCoord) {}

    double calculateDistance(Point* otherPoint) {
        double xDiff = this->x - otherPoint->x;
        double yDiff = this->y - otherPoint->y;
        return std::sqrt(xDiff * xDiff + yDiff * yDiff);
    }
};

int main() {
    double x1, y1, x2, y2;

    // Input for the coordinates of two points
    std::cin >> x1 >> y1;
    std::cin >> x2 >> y2;

    // Create Point objects for the two points
    Point point1(x1, y1);
    Point point2(x2, y2);

    // Calculate the distance between the two points using the calculateDistance method
    double distance = point1.calculateDistance(&point2);

    // Display the distance rounded to two decimal places
    std::cout << std::fixed << std::setprecision(2) << distance << std::endl;

    return 0;
}

