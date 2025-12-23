#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;
    
public:
    LinkedList() : head(nullptr) {}
    
    void createFromArray(int arr[], int size) {
        if (size == 0) return;
        
        head = new Node{arr[0], nullptr};
        Node* current = head;
        
        for (int i = 1; i < size; i++) {
            current->next = new Node{arr[i], nullptr};
            current = current->next;
        }
    }
    
    void traverse() {
        if (head == nullptr) {
            cout << "List is empty!" << endl;
            return;
        }
        
        Node* current = head;
        cout << "Linked List: ";
        while (current != nullptr) {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "NULL" << endl;
    }
    
    ~LinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* temp = current;
            current = current->next;
            delete temp;
        }
    }
};

int main() {
    LinkedList list;
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Creating linked list from array..." << endl;
    list.createFromArray(arr, size);
    list.traverse();
    
    return 0;
}