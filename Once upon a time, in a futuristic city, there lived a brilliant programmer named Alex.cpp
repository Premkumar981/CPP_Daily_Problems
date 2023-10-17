#include <iostream>
using namespace std;

class Matrix {
private:
    int rows;
    int cols;
    int **matrix;

public:
    Matrix(int r, int c) {
        rows = r;
        cols = c;
        matrix = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            matrix[i] = new int[cols];
        }
    }

    // Function to take input for the matrix
    void inputMatrix() {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cin >> matrix[i][j];
            }
        }
    }

    // Function to display the matrix in row-major order
    void displayRowMajor() {
        cout << "Matrix:";
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                cout << " " << matrix[i][j];
            }
        }
    }

    // Function to display the matrix in column-major order
    void displayColumnMajor() {
        cout << " Column-Major Array:";
        for (int j = 0; j < cols; ++j) {
            for (int i = 0; i < rows; ++i) {
                cout << " " << matrix[i][j];
            }
        }
    }

    // Destructor to free memory
    ~Matrix() {
        for (int i = 0; i < rows; ++i) {
            delete[] matrix[i];
        }
        delete[] matrix;
    }
};

int main() {
    int rows, cols;
    cin >> rows >> cols;

    Matrix mat(rows, cols);

    mat.inputMatrix();

    mat.displayRowMajor();
    mat.displayColumnMajor();

    return 0;
}

