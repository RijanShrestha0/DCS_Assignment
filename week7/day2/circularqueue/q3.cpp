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
    }
    
    int dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow! Cannot dequeue from empty queue." << endl;
            return -1;
        }
        
        int value = arr[front];
        
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % SIZE;
        }
        
        cout << "Successfully dequeued: " << value << endl;
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
        cout << " | Front: " << front << ", Rear: " << rear << endl;
    }
};

int main() {
    CircularQueue q;
    
    cout << "=== Circular Queue Dequeue Demo ===" << endl;
    
    cout << "\nEnqueuing elements:" << endl;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.display();
    
    cout << "\nPerforming dequeue operations:" << endl;
    q.dequeue();
    q.display();
    
    q.dequeue();
    q.display();
    
    cout << "\nAdding more elements (wrapping around):" << endl;
    q.enqueue(50);
    q.enqueue(60);
    q.display();
    
    cout << "\nContinuing dequeue:" << endl;
    q.dequeue();
    q.display();
    
    q.dequeue();
    q.display();
    
    return 0;
}