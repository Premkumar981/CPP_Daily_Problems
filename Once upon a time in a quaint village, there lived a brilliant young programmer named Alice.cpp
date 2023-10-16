#include <iostream>
#include <string>
using namespace std;

class CustomString {
private:
    string str;

public:
    CustomString(string s) : str(s) {}

    CustomString operator++() {
        if (!str.empty()) {
            str[0] = toupper(str[0]);
        }
        return *this;
    }

    string getString() {
        return str;
    }
};

int main() {
    string input;
    getline(cin, input);

    CustomString customStr(input);

    cout << "Original string: " << input << endl;

    ++customStr;

    cout << "Modified string: " << customStr.getString() << endl;

    return 0;
}
