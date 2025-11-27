#include <iostream>
using namespace std;

int main() {
    int matrix[2][3];

    cout << "Enter 6 numbers for a 2x3 matrix:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    // Reverse each row
    for (int i = 0; i < 2; i++) {
        int start = 0;
        int end = 2; // For 3 columns
        while (start < end) {
            int temp = matrix[i][start];
            matrix[i][start] = matrix[i][end];
            matrix[i][end] = temp;
            start++;
            end--;
        }
    }

    cout << "Reversed rows:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
