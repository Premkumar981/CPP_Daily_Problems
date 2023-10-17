#include <iostream>
#include <map>
using namespace std;

class RomanNumeral {
private:
    string roman;
    map<char, int> romanToDecimal;

public:
    RomanNumeral(string r) : roman(r) {
        // Initialize the map with Roman numeral symbols and their decimal values
        romanToDecimal['I'] = 1;
        romanToDecimal['V'] = 5;
        romanToDecimal['X'] = 10;
        romanToDecimal['L'] = 50;
        romanToDecimal['C'] = 100;
        romanToDecimal['D'] = 500;
        romanToDecimal['M'] = 1000;
    }

    // Function to convert Roman numeral to decimal
    int toDecimal() {
        int decimal = 0;
        int prevValue = 0;

        // Traverse the Roman numeral string from right to left
        for (int i = roman.length() - 1; i >= 0; i--) {
            int currentValue = romanToDecimal[roman[i]];

            // If the current value is smaller than the previous value, subtract it
            if (currentValue < prevValue) {
                decimal -= currentValue;
            }
            // Otherwise, add it to the result
            else {
                decimal += currentValue;
            }

            // Update the previous value
            prevValue = currentValue;
        }

        return decimal;
    }
};

int main() {
    string romanNumeral;
    cin >> romanNumeral;

    RomanNumeral rn(romanNumeral);

    int decimalNumber = rn.toDecimal();

    cout << "Equivalent decimal number: " << decimalNumber << endl;

    return 0;
}

