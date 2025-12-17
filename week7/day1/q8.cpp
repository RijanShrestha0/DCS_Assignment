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

// Function to count the number of nodes in a linked list
int countNodes(Node* head) {
    int count = 0;
    Node* current = head;
    while (current != nullptr) {
        count++;
        current = current->next;
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    Node* head = createLinkedList(arr, size);

    std::cout << "Linked List: ";
    printLinkedList(head);

    std::cout << "Number of nodes: " << countNodes(head) << std::endl; // Expected: 5

    // Test with an empty list
    Node* emptyList = nullptr;
    std::cout << "Number of nodes in empty list: " << countNodes(emptyList) << std::endl; // Expected: 0

    // Test with a single-node list
    Node* singleNodeList = new Node(100);
    std::cout << "Number of nodes in single node list: " << countNodes(singleNodeList) << std::endl; // Expected: 1

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

