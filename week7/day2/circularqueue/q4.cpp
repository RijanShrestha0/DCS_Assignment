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
        return (front == -1);
    }
    
    void enqueue(int value) {
        if ((rear + 1) % SIZE == front) return;
        if (front == -1) front = 0;
        rear = (rear + 1) % SIZE;
        arr[rear] = value;
        cout << "Enqueued: " << value << endl;
    }
    
    int dequeue() {
        if (isEmpty()) return -1;
        int value = arr[front];
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % SIZE;
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
    
    cout << "=== Circular Queue Peek/Front Demo ===" << endl;
    
    cout << "\nChecking front of empty queue:" << endl;
    q.peek();
    
    cout << "\nEnqueuing elements:" << endl;
    q.enqueue(100);
    q.enqueue(200);
    q.enqueue(300);
    q.display();
    
    cout << "\nFront element: " << q.peek() << endl;
    cout << "(Element is still in queue)" << endl;
    q.display();
    
    cout << "\nDequeue two elements:" << endl;
    q.dequeue();
    q.dequeue();
    q.display();
    
    cout << "\nNew front element: " << q.peek() << endl;
    
    cout << "\nAdding elements (wrapping around):" << endl;
    q.enqueue(400);
    q.enqueue(500);
    q.display();
    cout << "Front element after wrap: " << q.peek() << endl;
    
    return 0;
}