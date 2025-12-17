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

// Function to insert a new node at the end of the linked list
Node* insertAtEnd(Node* head, int val) {
    Node* newNode = new Node(val);
    if (head == nullptr) {
        return newNode; // If list is empty, new node becomes head
    }
    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = newNode;
    return head;
}

int main() {
    int arr[] = {10, 20, 30};
    int size = sizeof(arr) / sizeof(arr[0]);

    Node* head = createLinkedList(arr, size);

    std::cout << "Original Linked List: ";
    printLinkedList(head);

    head = insertAtEnd(head, 40);
    std::cout << "After inserting 40 at end: ";
    printLinkedList(head);

    head = insertAtEnd(head, 50);
    std::cout << "After inserting 50 at end: ";
    printLinkedList(head);

    // Test with an empty list
    Node* emptyList = nullptr;
    emptyList = insertAtEnd(emptyList, 100);
    std::cout << "Empty list after inserting 100: ";
    printLinkedList(emptyList);

    // Clean up memory
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
    head = nullptr;

    current = emptyList;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
    emptyList = nullptr;


    return 0;
}

