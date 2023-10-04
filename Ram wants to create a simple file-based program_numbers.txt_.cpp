#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    if (n <= 1000) {
        ofstream outfile("numbers.txt");
        if (outfile.is_open()) {
            for (int i = 1; i <= n; i++) {
                outfile << i << endl;
            }
            outfile.close();
            
            ifstream infile("numbers.txt");
            if (infile.is_open()) {
                int num;
                while (infile >> num) {
                    cout << num << endl;
                }
                infile.close();
            } else {
                cout << "Error opening file for reading." << endl;
            }
        } else {
            cout << "Error opening file for writing." << endl;
}
    } else {
        cout << "Exceeding Limit!" << endl;
    }
    
    return 0;
}

