#include <iostream>

using namespace std;

// Define a Node structure
struct Node {
    int data;
    Node* next;

    // Constructor to initialize a node
    Node(int val) : data(val), next(nullptr) {}
};

// Function to create a linked list from an array
Node* createLinkedList(int arr[], int size) {
    if (size <= 0) {
        return nullptr;
    }

    Node* head = new Node(arr[0]);
    Node* current = head;

    for (int i = 1; i < size; ++i) {
        current->next = new Node(arr[i]);
        current = current->next;
    }
    return head;
}

// Function to traverse and print the linked list
void printLinkedList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

// Function to search for an element in the linked list
int searchElement(Node* head, int target) {
    Node* current = head;
    int position = 1;
    while (current != nullptr) {
        if (current->data == target) {
            return position;
        }
        current = current->next;
        position++;
    }
    return -1; // Element not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    Node* head = createLinkedList(arr, size);

    std::cout << "Linked List: ";
    printLinkedList(head);

    int target1 = 30;
    int position1 = searchElement(head, target1);
    if (position1 != -1) {
        std::cout << "Element " << target1 << " found at position: " << position1 << std::endl; // Expected: 3
    } else {
        std::cout << "Element " << target1 << " not present in the list." << std::endl;
    }

    int target2 = 60;
    int position2 = searchElement(head, target2);
    if (position2 != -1) {
        std::cout << "Element " << target2 << " found at position: " << position2 << std::endl;
    } else {
        std::cout << "Element " << target2 << " not present in the list." << std::endl; // Expected: not present
    }

    // Clean up memory
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
    head = nullptr;

    return 0;
}

