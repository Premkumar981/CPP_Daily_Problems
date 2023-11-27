#include <iostream>
using namespace std;

class Main {
public:
    Main(int num) {
        if (num <= 20) {
            int square = num * num;
            int sum = 0;
            while (square != 0) {
                int a = square % 10;
                sum = sum + a;
                square = square / 10;
            }
            if (sum == num) {
                cout << num << "  it's a Neon Number." << endl;
            } else {
                cout << num << " it's Not a Neon Number." << endl;
            }
        } else {
            cout << "Enter a valid number." << endl;
        }
    }

    virtual ~Main() {}
};

int main() {
    int n;
    cin >> n;
    Main obj(n);
    return 0;
}
