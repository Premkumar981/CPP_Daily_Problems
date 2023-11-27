#include <iostream>
#include <list>
#include <algorithm>

std::list<int> getUniqueElements(std::list<int> songsList) {
    songsList.sort();
    songsList.unique();
    return songsList;
}

int main() {
    int N;
    std::cin >> N;
    std::list<int> songsList;
    for (int i = 0; i < N; i++) {
        int songID;
        std::cin >> songID;
        songsList.push_back(songID);
    }
    std::list<int> uniqueList = getUniqueElements(songsList);
    for (int songID : uniqueList) {
        std::cout << songID << " ";
    }
    return 0;
}

