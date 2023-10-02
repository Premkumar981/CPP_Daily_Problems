#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int numberCount;
    cin >> numberCount;

    ifstream inputFile("numbers.txt");
    if (!inputFile) {
        ofstream outputFile("numbers.txt");
        for (int i = 1; i <= numberCount; i++) {
            outputFile << i << endl;
        }
        cout << "File is empty" << endl;
        outputFile.close();

        ofstream appendFile("numbers.txt", ios::app);
        for (int i = 100; i < 100 + numberCount; i++) {
            appendFile << i << endl;
        }
        cout << "Adding " << numberCount << " numbers starting from 100" << endl;
        cout << "Success" << endl;
        appendFile.close();
    } else {
        cout << "Failed" << endl;
        inputFile.close();
    }

    return 0;
}
