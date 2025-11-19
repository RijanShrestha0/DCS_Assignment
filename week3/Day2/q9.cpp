#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number for the size of Pascal's triangle: ";
    cin >> n;

    for (int i = 0; i < n; i++) {

        // print leading spaces
        for (int s = 0; s < n - i - 1; s++)
            cout << " ";

        long long value = 1;  // first value in each row is always 1

        for (int j = 0; j <= i; j++) {
            cout << value << " ";
            value = value * (i - j) / (j + 1);   // generate next value safely
        }

        cout << endl;
    }
}