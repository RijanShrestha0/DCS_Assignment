#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number for the size of the triangle: ";
    cin >> n;

    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < i; j++) {
            cout << char('A' + j) << " ";
        }
        cout << endl;
    }
}