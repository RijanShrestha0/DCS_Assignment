#include <iostream>
using namespace std;

int main() {
    int n, key;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " sorted numbers:\n"; // Added 'sorted' as binary search requires it
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Enter number to search: ";
    cin >> key;

    int low = 0, high = n - 1, mid, pos = -1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            pos = mid;
            break;
        }
        else if (key > arr[mid]) low = mid + 1;
        else high = mid - 1;
    }

    if (pos == -1) cout << "Not found";
    else cout << "Found at index " << pos;
    cout << endl;
}