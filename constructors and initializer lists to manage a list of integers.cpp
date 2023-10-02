#include <iostream>
#include <vector>

using namespace std;

class Integer {
    int value;
public:
    Integer(int v) : value(v) {}
    int getValue() const { return value; }
};

int main() {
    int n;
    cin >> n;
    vector<Integer> c(n/2*2, Integer(10));
    for (int i = 0; i < n/2*2; i += 2) {
        c[i] = Integer(0);
    }
    for (int i = 0; i < n; i++) {
        cout << c[i].getValue() << endl;
    }
    return 0;
}

