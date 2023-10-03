#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Read input text from the user
    std::string inputText;
    std::getline(std::cin, inputText);

    // Save the input text to "sample1.txt"
    std::ofstream file1("sample1.txt");
    if (file1.is_open()) {
        file1 << inputText;
        file1.close();
    } else {
        std::cerr << "Error opening sample1.txt for writing." << std::endl;
        return 1;
    }

    // Reverse the input text and save it to "sample2.txt"
    std::string reversedText = inputText;
    int length = reversedText.length();
    for (int i = 0; i < length / 2; i++) {
        char temp = reversedText[i];
        reversedText[i] = reversedText[length - i - 1];
        reversedText[length - i - 1] = temp;
    }

    std::ofstream file2("sample2.txt");
    if (file2.is_open()) {
        file2 << reversedText;
        file2.close();
    } else {
        std::cerr << "Error opening sample2.txt for writing." << std::endl;
        return 1;
    }

    // Compare the contents of "sample1.txt" and "sample2.txt" byte by byte
    std::ifstream file1Read("sample1.txt");
    std::ifstream file2Read("sample2.txt");

    if (file1Read && file2Read) {
        bool filesAreSame = true;
        char char1, char2;

        while (true) {
            file1Read.get(char1);
            file2Read.get(char2);

            if (char1 != char2) {
                filesAreSame = false;
                break;
            }

            if (file1Read.eof() || file2Read.eof())
                break;
        }

        file1Read.close();
        file2Read.close();

        if (filesAreSame) {
            std::cout << "Comparing files..." << std::endl;
            std::cout << "Files are the same." << std::endl;
        } else {
            std::cout << "Comparing files..." << std::endl;
            std::cout << "Files differ." << std::endl;
        }
    } else {
        std::cerr << "Error opening sample1.txt or sample2.txt for reading." << std::endl;
        return 1;
    }

    return 0;
}
