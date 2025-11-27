#include <iostream>
using namespace std;

int main() {
    int n, key;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter number to search: ";
    cin >> key;

    int pos = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            pos = i;
            break;
        }
    }

    if (pos == -1) cout << "Not found";
    else cout << "Found at index " << pos;
    cout << endl;

    return 0;
}