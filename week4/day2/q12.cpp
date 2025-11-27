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

    cout << "Boundary elements: ";
    int N = 3;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == 0 || i == N - 1 || j == 0 || j == N - 1) {
                cout << matrix[i][j] << " ";
            }
        }
    }
    cout << endl;

    return 0;
}
