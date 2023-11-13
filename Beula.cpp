#include <iostream>
#include <algorithm>

int main() {
    std::string c;
    char ch;
    std::cin >> c >> ch;

    int count = std::count_if(c.begin(), c.end(), [ch](char c) {
        return c != ch;
    });

    std::cout << count << std::endl;

    return 0;
}

