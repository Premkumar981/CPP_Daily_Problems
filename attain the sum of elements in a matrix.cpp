#include <iostream>
#include <vector>

int main() {
    int rowCount, colCount;

    // Input the number of rows and columns
    std::cin >> rowCount >> colCount;

    // Create a 2D vector to store the matrix
    std::vector<std::vector<int>> matrix(rowCount, std::vector<int>(colCount));

    // Input matrix elements
    for (int i = 0; i < rowCount; i++) {
        for (int j = 0; j < colCount; j++) {
            std::cin >> matrix[i][j];
        }
    }

    // Calculate and display row sums
    for (int i = 0; i < rowCount; i++) {
        int rowSum = 0;
        for (int j = 0; j < colCount; j++) {
            rowSum += matrix[i][j];
        }

        // Display row elements and their sum
        for (int j = 0; j < colCount; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "SUM: " << rowSum << std::endl;
    }

    return 0;
}

