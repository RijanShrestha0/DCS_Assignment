#include <iostream>
using namespace std;

int main() {
    int matrixA[2][3];
    int matrixB[3][2];
    int resultMatrix[2][2];

    cout << "Enter 6 numbers for the first 2x3 matrix (Matrix A):\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrixA[i][j];
        }
    }

    cout << "Enter 6 numbers for the second 3x2 matrix (Matrix B):\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> matrixB[i][j];
        }
    }

    // Initialize resultMatrix with zeros
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            resultMatrix[i][j] = 0;
        }
    }

    // Multiply matrices
    for (int i = 0; i < 2; i++) { // rows of A
        for (int j = 0; j < 2; j++) { // columns of B
            for (int k = 0; k < 3; k++) { // columns of A / rows of B
                resultMatrix[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    cout << "Result of Matrix A x Matrix B:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << resultMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
