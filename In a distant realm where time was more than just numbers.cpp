#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {}

    Time operator-(const Time& other) {
        int diffSeconds = seconds - other.seconds;
        int diffMinutes = minutes - other.minutes;
        int diffHours = hours - other.hours;

        if (diffSeconds < 0) {
            diffSeconds += 60;
            diffMinutes--;
        }

        if (diffMinutes < 0) {
            diffMinutes += 60;
            diffHours--;
        }

        return Time(diffHours, diffMinutes, diffSeconds);
    }

    friend ostream& operator<<(ostream& os, const Time& t) {
        os << t.hours << "h " << t.minutes << "m " << t.seconds << "s";
        return os;
    }
};

int main() {
    int h1, m1, s1, h2, m2, s2;
    cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;

    Time time1(h1, m1, s1);
    Time time2(h2, m2, s2);
    
    cout << "Time 1: " << time1 << endl;
    cout << "Time 2: " << time2 << endl;
    
    Time timeDiff = time1 - time2;
    cout << "Time difference: " << timeDiff << endl;

    return 0;
}

