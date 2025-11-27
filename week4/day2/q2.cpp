#include <iostream>
using namespace std;

int main() {
    int matrix[2][3];
    int sum = 0;

    cout << "Enter 6 numbers for a 2x3 matrix:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
            sum += matrix[i][j];
        }
    }

    cout << "Sum = " << sum << endl;

    return 0;
}
