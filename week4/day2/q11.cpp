#include <iostream>
using namespace std;

int main() {
    int matrix[3][2];

    cout << "Enter 6 numbers for a 3x2 matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> matrix[i][j];
        }
    }

    // Reverse each column
    for (int j = 0; j < 2; j++) { // Iterate through columns
        int startRow = 0;
        int endRow = 2; // For 3 rows
        while (startRow < endRow) {
            int temp = matrix[startRow][j];
            matrix[startRow][j] = matrix[endRow][j];
            matrix[endRow][j] = temp;
            startRow++;
            endRow--;
        }
    }

    cout << "Reversed columns:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
