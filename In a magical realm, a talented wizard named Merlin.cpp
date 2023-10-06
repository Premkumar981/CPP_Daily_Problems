#include <iostream>
#include <cstring>

class RepeatableString {
private:
    char* str;
public:
    RepeatableString(const char* input) {
        int len = strlen(input);
        str = new char[len + 1];
        strcpy(str, input);
    }

    RepeatableString operator*(int repetitions) {
        char* result = new char[strlen(str) * repetitions + 1];
        result[0] = '\0'; // Initialize as an empty string
        for (int i = 0; i < repetitions; i++) {
            strcat(result, str);
        }
        return RepeatableString(result);
    }

    friend std::ostream& operator<<(std::ostream& os, const RepeatableString& rs) {
        os << "Result: " << rs.str;
        return os;
    }

    ~RepeatableString() {
        delete[] str;
    }
};

int main() {
    char input[101]; // Max input length is 100
    int repetitions;

    std::cin >> input >> repetitions;

    RepeatableString rs(input);
    RepeatableString result = rs * repetitions;

    std::cout << result << std::endl;

    return 0;
}

