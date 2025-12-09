#include <iostream>

void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}

int main() {
    // int n;
    // cout << "Enter number of elements: ";
    // cin >> n;
    // int arr[n];

    // for (int i=0; i<n; i++) { 
    //     cout << "Enter element [" << i+1 << "] : ";
    //     cin >> arr[i];
    // }

    
    int n = 10;
    int arr [] = {82, 42, 49, 8, 25, 52, 36, 93, 59, 15};
    std::cout << std::endl;
    std::cout << "Unsorted Array : " << std::endl;
    printArray(arr,n);
    mergeSort (arr,0,n-1);
    std::cout << std::endl;
    std::cout << "Sorted Array : " << std::endl;
    printArray(arr,n);
    return 0;
}
