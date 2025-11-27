#include <iostream>
using namespace std;

int sumArray(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) sum += a[i];
    return sum;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Sum = " << sumArray(arr, n);
    cout << endl;
}