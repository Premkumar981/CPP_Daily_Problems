#include <iostream>
#include <cstring>
using namespace std;

class CustomString {
private:
    char str[101]; // Assuming the maximum length of the string is 100 characters.

public:
    CustomString(const char* s) {
        strncpy(str, s, sizeof(str) - 1);
        str[sizeof(str) - 1] = '\0'; // Ensure null-terminated string.
    }

    // Overload the ! operator to invert the case of characters.
    CustomString operator!() {
        CustomString inverted(str);
        for (int i = 0; str[i] != '\0'; ++i) {
            if (islower(str[i])) {
                inverted.str[i] = toupper(str[i]);
            }
            else if (isupper(str[i])) {
                inverted.str[i] = tolower(str[i]);
            }
        }
        return inverted;
    }

    const char* getStr() const {
        return str;
    }
};

int main() {
    char input[101];
    cin.getline(input, sizeof(input));

    CustomString customStr(input);

    cout << "Original String: " << customStr.getStr() << endl;

    CustomString invertedStr = !customStr;

    cout << "Inverted String: " << invertedStr.getStr() << endl;

    return 0;
}

