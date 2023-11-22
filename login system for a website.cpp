#include <iostream>
#include <string>
using namespace std;

bool validatePassword(const string& password) {
    if (password.length() < 6) {
        throw "Password must be at least 6 characters long";
    }

    bool hasDigit = false;
    for (char c : password) {
        if (isdigit(c)) {
            hasDigit = true;
            break;
        }
    }

    if (!hasDigit) {
        throw "Password must have at least one digit";
    }

    return true;
}

int main() {
    string username, password;

    //cout << "Enter username: ";
    getline(cin, username);

    //cout << "Enter password: ";
    getline(cin, password);

    try {
        validatePassword(password);
        cout << "Password is Correct" << endl;
    } catch (const char* errorMessage) {
        cout << errorMessage << endl;
        cout << "Caught by Exception" << endl;
        cout << "Invalid Password Format!" << endl;
    }

    return 0;
}

