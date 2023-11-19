#include <iostream>
#include <string>
using namespace std;

class EditDistanceCalculator {
public:
    virtual int min(int x, int y, int z) = 0;

    int edit_distance(string str1, string str2) {
        int len1 = str1.length();
        int len2 = str2.length();
        int dist[len1 + 1][len2 + 1];

        for (int i = 0; i <= len1; i++) {
            for (int j = 0; j <= len2; j++) {
                if (i == 0) {
                    dist[i][j] = j;
                } else if (j == 0) {
                    dist[i][j] = i;
                } else if (str1[i - 1] == str2[j - 1]) {
                    dist[i][j] = dist[i - 1][j - 1];
                } else {
                    dist[i][j] = 1 + min(dist[i][j - 1], dist[i - 1][j], dist[i - 1][j - 1]);
                }
            }
        }

        return dist[len1][len2];
    }
};

class MinEditDistanceCalculator : public EditDistanceCalculator {
public:
    int min(int x, int y, int z) override {
        if (x < y && x < z) {
            return x;
        } else if (y < x && y < z) {
            return y;
        } else {
            return z;
        }
    }
};

int main() {
    string str1, str2;
    cin >> str1 >> str2;

    MinEditDistanceCalculator calculator;
    int dist = calculator.edit_distance(str1, str2);
    cout << "Edit distance between " << str1 << " and " << str2 << " is " << dist << endl;

    return 0;
}
