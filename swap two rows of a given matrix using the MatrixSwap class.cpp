#include <iostream>
#include <vector>

class MatrixSwap {
public:
    MatrixSwap(int n, int m) : rows(n), cols(m), matrix(n, std::vector<int>(m)) {}

    void readMatrix() {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cin >> matrix[i][j];
            }
        }
    }

    bool swapRows(int r1, int r2) {
        if (r1 >= 1 && r1 <= rows && r2 >= 1 && r2 <= rows) {
            std::swap(matrix[r1 - 1], matrix[r2 - 1]);
            return true;
        } else {
            return false;
        }
    }

    void printMatrix() {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cout << matrix[i][j];
                if (j < cols - 1) {
                    std::cout << " ";
                }
            }
            std::cout << std::endl;
        }
    }

private:
    int rows;
    int cols;
    std::vector<std::vector<int>> matrix;
};

int main() {
    int N, M;
    std::cin >> N >> M;

    MatrixSwap matrix(N, M);
    matrix.readMatrix();

    int r1, r2;
    std::cin >> r1 >> r2;

    if (matrix.swapRows(r1, r2)) {
        matrix.printMatrix();
    } else {
        std::cout << "Invalid row numbers" << std::endl;
    }

    return 0;
}

