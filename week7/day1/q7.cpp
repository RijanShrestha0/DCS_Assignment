#include <iostream>

// Define a Node structure
struct Node {
    int data;
    Node* next;

    // Constructor to initialize a node
    Node(int val) : data(val), next(nullptr) {}
};

// Function to create a linked list from an array
Node* createLinkedList(int arr[], int size) {
    if (size == 0) {
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

// Function to reverse a singly linked list
Node* reverseLinkedList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->next; // Store next node
        current->next = prev; // Reverse current node's pointer
        prev = current;       // Move pointers one position ahead
        current = next;
    }
    return prev; // New head will be the previous tail
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    Node* head = createLinkedList(arr, size);

    std::cout << "Original Linked List: ";
    printLinkedList(head);

    head = reverseLinkedList(head);
    std::cout << "Reversed Linked List: ";
    printLinkedList(head);

    // Test with an empty list
    Node* emptyList = nullptr;
    emptyList = reverseLinkedList(emptyList);
    std::cout << "Reversed Empty List: ";
    printLinkedList(emptyList);

    // Test with a single-node list
    Node* singleNodeList = new Node(100);
    std::cout << "Original Single Node List: ";
    printLinkedList(singleNodeList);
    singleNodeList = reverseLinkedList(singleNodeList);
    std::cout << "Reversed Single Node List: ";
    printLinkedList(singleNodeList);

    // Clean up memory
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
    head = nullptr;

    current = singleNodeList;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
    singleNodeList = nullptr;

    return 0;
}

