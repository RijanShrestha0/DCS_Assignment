#include <iostream>
using namespace std;

int main() {
    int matrixA[2][2];
    int matrixB[2][2];
    int resultMatrix[2][2];

    cout << "Enter 4 numbers for the first 2x2 matrix (Matrix A):\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> matrixA[i][j];
        }
    }

    cout << "Enter 4 numbers for the second 2x2 matrix (Matrix B):\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> matrixB[i][j];
        }
    }

    // Add matrices
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            resultMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }

    cout << "Result of Matrix A + Matrix B:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << resultMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
