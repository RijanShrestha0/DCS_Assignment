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

// Function to insert a new node with value Y immediately after the first node with value X
Node* insertAfterValue(Node* head, int x, int y) {
    if (head == nullptr) {
        std::cout << "List is empty. Cannot insert after " << x << "." << std::endl;
        return nullptr;
    }

    Node* current = head;
    while (current != nullptr && current->data != x) {
        current = current->next;
    }

    if (current != nullptr) {
        Node* newNode = new Node(y);
        newNode->next = current->next;
        current->next = newNode;
    } else {
        std::cout << "Value " << x << " not found in the list. Cannot insert " << y << "." << std::endl;
    }
    return head;
}

int main() {
    int arr[] = {10, 20, 30, 40};
    int size = sizeof(arr) / sizeof(arr[0]);

    Node* head = createLinkedList(arr, size);

    std::cout << "Original Linked List: ";
    printLinkedList(head);

    head = insertAfterValue(head, 20, 25);
    std::cout << "After inserting 25 after 20: ";
    printLinkedList(head);

    head = insertAfterValue(head, 40, 45);
    std::cout << "After inserting 45 after 40 (at end): ";
    printLinkedList(head);

    head = insertAfterValue(head, 10, 5);
    std::cout << "After inserting 5 after 10: ";
    printLinkedList(head);

    head = insertAfterValue(head, 99, 100);
    std::cout << "After trying to insert after 99 (not found): ";
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

