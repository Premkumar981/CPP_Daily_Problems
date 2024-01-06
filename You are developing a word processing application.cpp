#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
// Function to sort the characters of a word
std::string sortWord(const std::string& word) {
    std::string sortedWord = word;
    std::sort(sortedWord.begin(), sortedWord.end());
    return sortedWord;
}
int main() {
    std::string inputSentence, word, sortedSentence;
    std::vector<std::string> words;
    std::getline(std::cin, inputSentence);
    std::istringstream iss(inputSentence);
    while (iss >> word) {
        words.push_back(sortWord(word));
    }
    // Dynamically allocate memory to store the sorted words
    std::string* sortedWords = new std::string[words.size()];
    for (size_t i = 0; i < words.size(); ++i) {
        sortedWords[i] = words[i];
    }
    for (size_t i = 0; i < words.size(); ++i) {
        sortedSentence += sortedWords[i];
        if (i < words.size() - 1) {
            sortedSentence += ' ';
        }
    }
    std::cout << sortedSentence << std::endl;
    delete[] sortedWords;     
	return 0;
}

