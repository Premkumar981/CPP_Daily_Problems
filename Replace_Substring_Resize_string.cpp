#include <iostream>
#include <string>

int main() {
    std::string input, substring_to_replace, replacement, extracted_substring;
    int start_position, length, new_size;

    std::getline(std::cin, input);
    std::getline(std::cin, substring_to_replace);
    std::getline(std::cin, replacement);
    std::cin >> start_position >> length >> new_size;

    // Replace the substring
    input.replace(input.find(substring_to_replace), substring_to_replace.length(), replacement);
    std::cout << "Modified string after replace: " << input << std::endl;

    // Extract the substring
    extracted_substring = input.substr(start_position, length);
    std::cout << "Substring: " << extracted_substring << std::endl;

    // Resize the string
    input.resize(new_size);
    std::cout << "Resized string: " << input << std::endl;

    return 0;
}

