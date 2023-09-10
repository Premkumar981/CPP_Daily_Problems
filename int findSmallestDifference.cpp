#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

int findSmallestDifference(int* scores, int n) {

    std::sort(scores, scores + n);


    int minDifference = INT_MAX;


    for (int i = 1; i < n; i++) {
        int difference = scores[i] - scores[i - 1];
        if (difference < minDifference) {
            minDifference = difference;
        }
    }

    return minDifference;
}

int main() {
    int n;
    std::cin >> n;

    int* scores = new int[n];

    for (int i = 0; i < n; i++) {
        std::cin >> scores[i];
    }

    int smallestDifference = findSmallestDifference(scores, n);

    delete[] scores;

    std::cout << smallestDifference << std::endl;

    return 0;
}

