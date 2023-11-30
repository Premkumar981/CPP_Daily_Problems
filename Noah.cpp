#include <iostream>
#include <string>
#include <cctype>

template <typename T>
std::string convertString(T str, char choice) {
    std::string result;
    
    if (choice == 'U') {
        for (auto c : str) {
            result += std::toupper(c);
        }
        return "Uppercase string: " + result;
    } else if (choice == 'L') {
        for (auto c : str) {
            result += std::tolower(c);
        }
        return "Lowercase string: " + result;
    } else if (choice == 'F') {
        bool newWord = true;
        for (auto c : str) {
            if (newWord) {
                result += std::toupper(c);
                newWord = false;
            } else {
                result += std::tolower(c);
            }
            if (std::isspace(c)) {
                newWord = true;
            }
        }
        return "String with first letter of each word capitalized: " + result;
    } else {
        return "Invalid choice. Please enter U, L, or F.";
    }
}
std::string convertFirstLetterToUpper(){
	
}
    

int main() {
    std::string str;
    char choice;
    
    std::getline(std::cin, str);
    std::cin >> choice;
    
    std::cout << convertString(str, choice) << std::endl;
    
    return 0;
}
