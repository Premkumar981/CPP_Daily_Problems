#include <iostream>
using namespace std;

class Bicycle {
protected:
    int numGears;
    int speed;

public:
    Bicycle(int gears, int spd) : numGears(gears), speed(spd) {}

    void display() {
        cout << numGears << " " << speed << endl;
    }
};

class MountainBike : public Bicycle {
private:
    int seatHeight;

public:
    MountainBike(int gears, int spd, int height) : Bicycle(gears, spd), seatHeight(height) {}

    void display() {
        Bicycle::display();
        cout << seatHeight << endl;
    }
};

int main() {
    int gears, speed, seatHeight;
    cin >> gears >> speed >> seatHeight;

    MountainBike mountainBike(gears, speed, seatHeight);
    mountainBike.display();

    return 0;
}

