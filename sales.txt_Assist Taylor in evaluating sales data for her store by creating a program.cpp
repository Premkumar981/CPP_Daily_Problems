#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_set<string> whitelist = {"open", "close"};

    if (n > 10) {
        cout << "Exceeding limit!" << endl;
    } else {
        for (int i = 0; i < n; i++) {
            int cp, sp;
            cin >> cp >> sp;

            if (whitelist.count("open") > 0) {
                int profit = sp - cp;
                if (profit > 0) {
                    cout << "Profit: Rs." << profit << endl;
                } else if (profit < 0) {
                    cout << "Loss: Rs." << -profit << endl;
                } else {
                    cout << "No profit or no loss!" << endl;
                }
            } else {
                cout << "Invalid action: close" << endl;
            }
        }
    }

    return 0;
}

