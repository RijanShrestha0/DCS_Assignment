#include <iostream>
using namespace std;

int main() {
    int matrix[3][3];

    cout << "Enter 9 numbers for a 3x3 matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Row sums: ";
    for (int i = 0; i < 3; i++) {
        int rowSum = 0;
        for (int j = 0; j < 3; j++) {
            rowSum += matrix[i][j];
        }
        cout << rowSum << (i == 2 ? "" : ", ");
    }
    cout << endl;

    cout << "Column sums: ";
    for (int j = 0; j < 3; j++) {
        int colSum = 0;
        for (int i = 0; i < 3; i++) {
            colSum += matrix[i][j];
        }
        cout << colSum << (j == 2 ? "" : ", ");
    }
    cout << endl;

    return 0;
}
