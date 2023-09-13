#include <iostream>
#include <string>

using namespace std;

string checkPasswordStrength(string password) {
    int length = password.length();
    bool hasUppercase = false;
    bool hasLowercase = false;
    bool hasDigit = false;
    bool hasSpecialChar = false;

    // Check the length of the password
    if (length < 6) {
        return "Weak";
    }

    for (char c : password) {
        if (isupper(c)) {
            hasUppercase = true;
        } else if (islower(c)) {
            hasLowercase = true;
        } else if (isdigit(c)) {
            hasDigit = true;
        } else {
            hasSpecialChar = true;
        }
    }

    // Check the password strength based on criteria
    if (length >= 8 && hasUppercase && hasLowercase && hasDigit && hasSpecialChar) {
        return "Strong";
    } else if ((hasUppercase || hasLowercase) && hasDigit && length >= 6 && length <= 25) {
        return "Medium";
    } else {
        return "Weak";
    }
}

int main() {
    string password;
    cin >> password;

    string strength = checkPasswordStrength(password);
    cout << strength << endl;

    return 0;
}

