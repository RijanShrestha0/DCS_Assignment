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

// Function to delete the node at a given position
Node* deleteAtPosition(Node* head, int position) {
    if (head == nullptr) {
        std::cout << "List is empty. Cannot delete." << std::endl;
        return nullptr;
    }

    // Deleting the head node
    if (position == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* current = head;
    for (int i = 1; current != nullptr && i < position - 1; ++i) {
        current = current->next;
    }

    // If position is out of bounds
    if (current == nullptr || current->next == nullptr) {
        std::cout << "Position " << position << " is out of bounds." << std::endl;
        return head;
    }

    Node* temp = current->next;
    current->next = temp->next;
    delete temp;
    return head;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    Node* head = createLinkedList(arr, size);

    std::cout << "Original Linked List: ";
    printLinkedList(head);

    head = deleteAtPosition(head, 3);
    std::cout << "After deleting at position 3: ";
    printLinkedList(head);

    head = deleteAtPosition(head, 1);
    std::cout << "After deleting at position 1 (new head): ";
    printLinkedList(head);

    head = deleteAtPosition(head, 4);
    std::cout << "After trying to delete at position 4 (out of bounds): ";
    printLinkedList(head);

    head = deleteAtPosition(head, 3);
    std::cout << "After deleting at position 3: ";
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

