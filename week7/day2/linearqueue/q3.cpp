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
        if (rear == SIZE - 1) {
            cout << "Queue is full!" << endl;
            return;
        }
        if (front == -1) front = 0;
        arr[++rear] = value;
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
            front++;
        }
        
        cout << "Successfully dequeued: " << value << endl;
        return value;
    }
    
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }
        
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    LinearQueue q;
    
    cout << "=== Dequeue Operation Demo ===" << endl;
    
    cout << "\nEnqueuing elements first:" << endl;
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
    
    q.dequeue();
    q.display();
    
    q.dequeue();
    q.display();
    
    cout << "\nAttempting to dequeue from empty queue:" << endl;
    q.dequeue();
    
    return 0;
}