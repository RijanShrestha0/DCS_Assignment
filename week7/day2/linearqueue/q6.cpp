#include <iostream>
using namespace std;

#define SIZE 5

class LinearQueue {
private:
    int arr[SIZE];
    int front;
    int rear;
    
public:
    LinearQueue() : front(-1), rear(-1) {}
    
    bool isEmpty() {
        if (front == -1) {
            return true;
        }
        return false;
    }
    
    bool isFull() {
        if (rear == SIZE - 1) {
            return true;
        }
        return false;
    }
    
    void enqueue(int value) {
        if (isFull()) {
            cout << "Cannot enqueue " << value << " - Queue is full!" << endl;
            return;
        }
        if (front == -1) front = 0;
        arr[++rear] = value;
        cout << "Enqueued: " << value << endl;
    }
    
    int dequeue() {
        if (isEmpty()) {
            cout << "Cannot dequeue - Queue is empty!" << endl;
            return -1;
        }
        int value = arr[front];
        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
        cout << "Dequeued: " << value << endl;
        return value;
    }
    
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Queue: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    LinearQueue q;
    
    cout << "=== Check Full/Empty Conditions Demo ===" << endl;
    
    cout << "\nInitial state:" << endl;
    cout << "Is Empty? " << (q.isEmpty() ? "Yes" : "No") << endl;
    cout << "Is Full? " << (q.isFull() ? "Yes" : "No") << endl;
    
    cout << "\nFilling queue:" << endl;
    q.enqueue(10);
    cout << "Is Empty? " << (q.isEmpty() ? "Yes" : "No") << endl;
    cout << "Is Full? " << (q.isFull() ? "Yes" : "No") << endl;
    
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    
    cout << "\nAfter 4 insertions:" << endl;
    cout << "Is Empty? " << (q.isEmpty() ? "Yes" : "No") << endl;
    cout << "Is Full? " << (q.isFull() ? "Yes" : "No") << endl;
    
    q.enqueue(50);
    
    cout << "\nAfter filling completely:" << endl;
    cout << "Is Empty? " << (q.isEmpty() ? "Yes" : "No") << endl;
    cout << "Is Full? " << (q.isFull() ? "Yes" : "No") << endl;
    q.display();
    
    cout << "\nTrying to add to full queue:" << endl;
    q.enqueue(60);
    
    cout << "\nEmptying queue:" << endl;
    while (!q.isEmpty()) {
        q.dequeue();
    }
    
    cout << "\nAfter emptying completely:" << endl;
    cout << "Is Empty? " << (q.isEmpty() ? "Yes" : "No") << endl;
    cout << "Is Full? " << (q.isFull() ? "Yes" : "No") << endl;
    
    return 0;
}