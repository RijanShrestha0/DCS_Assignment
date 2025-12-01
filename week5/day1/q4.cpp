#include <iostream>

void printArray(int arr[], int size, int index = 0) {
    if (index < size) {
        std::cout << arr[index] << " ";
        printArray(arr, size, index + 1);
    }
}

int main() {
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    int* arr = new int[size];
    std::cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
    printArray(arr, size);
    std::cout << std::endl;
    delete[] arr;
    return 0;
}
