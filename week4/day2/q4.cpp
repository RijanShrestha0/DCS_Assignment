#include <iostream>
#include <limits>

using namespace std;

int main() {
    int matrix[3][3];

    cout << "Enter 9 numbers for a 3x3 matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Row max values: ";
    for (int i = 0; i < 3; i++) {
        int maxInRow = numeric_limits<int>::min();
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] > maxInRow) {
                maxInRow = matrix[i][j];
            }
        }
        cout << maxInRow << (i == 2 ? "" : ", ");
    }
    cout << endl;

    return 0;
}
