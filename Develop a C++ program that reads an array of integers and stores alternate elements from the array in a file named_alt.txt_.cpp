#include <iostream>
#include <fstream>

using namespace std;

const int MAX_SIZE = 100;

struct Array {
    int size;
    int elements[MAX_SIZE];
};

int main() {
    Array arr;

    cin >> arr.size;

    if (arr.size > MAX_SIZE) {
        cout << "Exceeding limit!" << endl;
        return 0;
    }

    for (int i = 0; i < arr.size; ++i) {
        cin >> arr.elements[i];
    }

    ofstream outputFile("alt.txt");

    if (!outputFile.is_open()) {
        cerr << "Failed to open file for writing." << endl;
        return 1;
    }

    for (int i = 0; i < arr.size; i += 2) {
        outputFile << arr.elements[i] << ' ';
    }

    outputFile.close();

    ifstream inputFile("alt.txt");

    if (!inputFile.is_open()) {
        cerr << "Failed to open file for reading." << endl;
        return 1;
    }

    int num;
    while (inputFile >> num) {
        cout << num << ' ';
    }

    inputFile.close();

    return 0;
}
