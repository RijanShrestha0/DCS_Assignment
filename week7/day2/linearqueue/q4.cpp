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
        return (front == -1);
    }
    
    void enqueue(int value) {
        if (rear == SIZE - 1) return;
        if (front == -1) front = 0;
        arr[++rear] = value;
        cout << "Enqueued: " << value << endl;
    }
    
    int dequeue() {
        if (isEmpty()) return -1;
        int value = arr[front];
        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
        cout << "Dequeued: " << value << endl;
        return value;
    }
    
    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty! No front element." << endl;
            return -1;
        }
        
        return arr[front];
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
    
    cout << "=== Peek/Front Element Demo ===" << endl;
    
    cout << "\nChecking front of empty queue:" << endl;
    int front = q.peek();
    
    cout << "\nEnqueuing elements:" << endl;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    
    cout << "\nFront element: " << q.peek() << endl;
    cout << "(Element is still in queue)" << endl;
    q.display();
    
    cout << "\nDequeue one element:" << endl;
    q.dequeue();
    q.display();
    
    cout << "\nNew front element: " << q.peek() << endl;
    q.display();
    
    return 0;
}