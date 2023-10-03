#include <iostream>
#include <fstream>
using namespace std;

struct Data {
    int number;
    int n;
};

int main() {
    Data data;
    cin >> data.n;

    if (data.n > 1000) {
        cout << "Exceeding Limit!" << endl;
        return 0;
    }

    ofstream outFile("num.txt");
    if (outFile.is_open()) {
        if (data.n % 2 == 1) {
            for (int i = 1; i <= data.n; ++i) {
                data.number = 3 * i;
                outFile << data.number << " ";
            }
        } else {
            for (int i = 1; i <= data.n; ++i) {
                data.number = 5 * i;
                outFile << data.number << " ";
            }
        }
        outFile.close();

        // Now, you need to read and display the contents of "num.txt"
        ifstream inFile("num.txt");
        if (inFile.is_open()) {
            while (inFile >> data.number) {
                cout << data.number << " ";
            }
            inFile.close();
            cout << endl;
        } else {
            cout << "Error opening file for reading." << endl;
        }
    } else {
        cout << "Error opening file for writing." << endl;
    }

    return 0;
}

