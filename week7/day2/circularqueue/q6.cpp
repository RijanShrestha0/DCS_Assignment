#include <iostream>
using namespace std;

#define SIZE 5

class CircularQueue {
private:
    int arr[SIZE];
    int front;
    int rear;
    
public:
    CircularQueue() : front(-1), rear(-1) {}
    
    bool isEmpty() {
        if (front == -1) {
            return true;
        }
        return false;
    }
    
    bool isFull() {
        if ((rear + 1) % SIZE == front) {
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
        rear = (rear + 1) % SIZE;
        arr[rear] = value;
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
            front = (front + 1) % SIZE;
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
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % SIZE;
        }
        cout << endl;
    }
};

int main() {
    CircularQueue q;
    
    cout << "=== Circular Queue Full/Empty Check Demo ===" << endl;
    
    cout << "\nInitial state:" << endl;
    cout << "Is Empty? " << (q.isEmpty() ? "Yes" : "No") << endl;
    cout << "Is Full? " << (q.isFull() ? "Yes" : "No") << endl;
    
    cout << "\nAdding first element:" << endl;
    q.enqueue(10);
    cout << "Is Empty? " << (q.isEmpty() ? "Yes" : "No") << endl;
    cout << "Is Full? " << (q.isFull() ? "Yes" : "No") << endl;
    
    cout << "\nAdding more elements:" << endl;
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.display();
    cout << "Is Empty? " << (q.isEmpty() ? "Yes" : "No") << endl;
    cout << "Is Full? " << (q.isFull() ? "Yes" : "No") << endl;
    
    cout << "\nNote: Queue is full when (rear+1)%SIZE == front" << endl;
    cout << "Trying to add to full queue:" << endl;
    q.enqueue(50);
    
    cout << "\nDequeuing all elements:" << endl;
    while (!q.isEmpty()) {
        q.dequeue();
    }
    
    cout << "\nAfter emptying:" << endl;
    cout << "Is Empty? " << (q.isEmpty() ? "Yes" : "No") << endl;
    cout << "Is Full? " << (q.isFull() ? "Yes" : "No") << endl;
    
    cout << "\nDemonstrating wrap-around with full check:" << endl;
    q.enqueue(100);
    q.enqueue(200);
    q.enqueue(300);
    q.dequeue();
    q.enqueue(400);
    q.enqueue(500);
    q.display();
    cout << "Is Full? " << (q.isFull() ? "Yes" : "No") << endl;
    
    return 0;
}