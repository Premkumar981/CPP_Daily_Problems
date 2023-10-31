#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    if (n <= 0) {
        cout << "Size of the matrix should be positive!" << endl;
        return 0;
    }

    int** matrix = new int*[n];
    for (int i = 0; i < n; i++) {
        matrix[i] = new int[n];
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    // Display the original matrix
    cout << "Original Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Rotate the matrix 90 degrees clockwise in place
    for (int layer = 0; layer < n / 2; layer++) {
        int first = layer;
        int last = n - 1 - layer;
        for (int i = first; i < last; i++) {
            int offset = i - first;
            int top = matrix[first][i];

            // Move values from left to top
            matrix[first][i] = matrix[last - offset][first];

            // Move values from bottom to left
            matrix[last - offset][first] = matrix[last][last - offset];

            // Move values from right to bottom
            matrix[last][last - offset] = matrix[i][last];

            // Move values from top to right
            matrix[i][last] = top;
        }
    }

    // Display the rotated matrix
    cout << "Matrix after 90-degree clockwise rotation:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate the dynamically allocated memory
    for (int i = 0; i < n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}

