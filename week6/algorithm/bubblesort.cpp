#include <iostream>
using namespace std;

void bubblesort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        cout << "Pass " << i + 1 << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                cout << "  Swapped " << arr[j+1] << " and " << arr[j] << ": ";
                for (int k = 0; k < n; k++) {
                    cout << arr[k] << " ";
                }
                cout << endl;
            }
        }
    }
}
int main() {
    int arr[] = {82, 42, 49, 8, 25, 52, 36, 93, 59, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Unsorted list is : \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    bubblesort(arr, n);
    cout << "Sorted list is : \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}