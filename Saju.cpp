#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    Point(int a = 0, int b = 0) : x(a), y(b) {}

    void setX(int a) {
        x = a;
    }

    void setY(int b) {
        y = b;
    }

    virtual void display() = 0;

    void displayPoint() {
        cout << "(" << x << "," << y << ")";
    }
};

class Line : public Point {
private:
    int x2, y2;

public:
    Line(int a = 0, int b = 0, int c = 0, int d = 0) : Point(a, b), x2(c), y2(d) {}

    void setX2(int c) {
        x2 = c;
    }

    void setY2(int d) {
        y2 = d;
    }

    void display() override {
        cout << "Start point: ";
        displayPoint();
        cout << endl;
        cout << "End point: ";
        cout << "(" << x2 << "," << y2 << ")";
    }
};

int main() {
    int x1, y1, x2, y2;

    cin >> x1;
    cin >> y1;

    cin >> x2;
    cin >> y2;

    Line l(x1, y1, x2, y2);

    cout << "The line is:\n";
    l.display();

    return 0;
}
