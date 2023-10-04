#include <iostream>
#include <fstream>

using namespace std;

class Employee {
public:
    int empID;
};

int main() {
    Employee emp;
    int eid;

    // Input employee ID
    cin >> eid;
    emp.empID = eid;

    // Open a binary file for writing
    ofstream outFile("employee.bin", ios::binary);

    if (!outFile) {
        cout << "Unable to setup." << endl;
        return 1;
    }

    // Write the employee object to the binary file
    outFile.write(reinterpret_cast<char*>(&emp), sizeof(emp));

    // Close the file
    outFile.close();

    // Open the file again to calculate the size
    ifstream inFile("employee.bin", ios::binary);
    inFile.seekg(0, ios::end); // Move to the end of the file
    int fileSize = inFile.tellg(); // Get the current position, which is the file size
    inFile.close();

    cout << "size is: " << fileSize << " bytes." << endl;

    return 0;
}

