#include <iostream>
// #include <algorithm> // Include for std::swap

using namespace std;

// Function to print an array
void printArray(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i != n - 1) {
            cout << ",";
        } else {
            cout << endl;
        }
    }
}

int partition(int* arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            // Manual swap
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Manual swap
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return i + 1;
}

void quickSortHelper(int* arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSortHelper(arr, low, pi - 1);
        quickSortHelper(arr, pi + 1, high);
    }
}

void quickSort(int* arr, int n) {
    quickSortHelper(arr, 0, n - 1);
}

int main() {
    int arr[] = {82, 42, 49, 8, 25, 52, 36, 93, 59, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted Array : " << endl;
    printArray(arr, n);

    quickSort(arr, n);

    cout << "Sorted Array : " << endl;
    printArray(arr, n);

    return 0;
}
