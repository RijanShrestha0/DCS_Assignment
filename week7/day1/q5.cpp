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

// Function to delete the first occurrence of a node with a given value
Node* deleteByValue(Node* head, int target) {
    if (head == nullptr) {
        return nullptr; // List is empty
    }

    // If head node itself holds the target
    if (head->data == target) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* current = head;
    while (current->next != nullptr && current->next->data != target) {
        current = current->next;
    }

    // If target was found
    if (current->next != nullptr) {
        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
    } else {
        std::cout << "Element " << target << " not found in the list." << std::endl;
    }
    return head;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 30};
    int size = sizeof(arr) / sizeof(arr[0]);

    Node* head = createLinkedList(arr, size);

    std::cout << "Original Linked List: ";
    printLinkedList(head);

    head = deleteByValue(head, 30);
    std::cout << "After deleting first 30: ";
    printLinkedList(head);

    head = deleteByValue(head, 10);
    std::cout << "After deleting 10 (head): ";
    printLinkedList(head);

    head = deleteByValue(head, 60);
    std::cout << "After trying to delete 60 (not found): ";
    printLinkedList(head);

    head = deleteByValue(head, 50);
    std::cout << "After deleting 50: ";
    printLinkedList(head);

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

