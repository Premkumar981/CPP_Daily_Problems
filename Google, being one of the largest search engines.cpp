#include <iostream>
#include <string>
#include <vector>

template <typename T>
class Indexer {
private:
    std::vector<std::pair<T, int>> urls;

public:
    void addURL(T url, int status) {
        urls.push_back(std::make_pair(url, status));
    }

    void displayIndexingStatus() const {
        //std::cout << "Total number of URLs indexed: " << urls.size() << std::endl;
        for (const auto& pair : urls) {
            std::cout << pair.first << ": ";
            if (pair.second == 1) {
                std::cout << "Indexed successfully" << std::endl;
            } else {
                std::cout << "Indexing failed" << std::endl;
            }
        }
    }
};

int main() {
    int n;
    std::cin >> n;

    Indexer<std::string> indexer;

    for (int i = 0; i < n; i++) {
        std::string url;
        int status;
        std::cin >> url >> status;
        indexer.addURL(url, status);
    }

    indexer.displayIndexingStatus();

    return 0;
}
