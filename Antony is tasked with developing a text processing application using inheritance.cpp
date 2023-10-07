#include <iostream>
#include <string>
#include <cctype>

class Demo {
private:
    static void move(std::string& str) {
        std::string alphanumeric;
        std::string nonAlphanumeric;

        for (char c : str) {
            if (std::isalnum(c)) {
                alphanumeric += c;
            } else {
                nonAlphanumeric += c;
            }
        }

        str = alphanumeric + nonAlphanumeric;
    }

public:
    static void run() {
        std::string input;
        std::getline(std::cin, input);

        move(input);

        std::cout << input << std::endl;
    }
};

int main() {
    Demo::run();

    return 0;
}

