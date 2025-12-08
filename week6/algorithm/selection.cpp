#include <iostream>
using namespace std;
static const int maxsize = 30;
void selectionsort (int arr[], int n)
{
    int min, temp;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        // Find the index of the smallest element
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        // Swap the found minimum element with the first element
        if (min != i) {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}
    //End of selectionSort()
    int main() {
        int arr[] = {82, 42, 49, 8, 25, 52, 36, 93, 59, 15};
        int n = sizeof(arr) / sizeof(arr[0]);
        cout << "Unsorted list is : \n";
        for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    selectionsort(arr, n);
    cout << "Sorted list is : \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
