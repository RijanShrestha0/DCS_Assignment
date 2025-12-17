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
    
    bool isFull() {
        return ((rear + 1) % SIZE == front);
    }
    
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue Overflow! Cannot insert " << value << endl;
            return;
        }
        
        if (front == -1) {
            front = 0;
        }
        
        rear = (rear + 1) % SIZE;
        arr[rear] = value;
        cout << "Successfully enqueued: " << value << " at index " << rear << endl;
    }
    
    void display() {
        if (front == -1) {
            cout << "Queue is empty!" << endl;
            return;
        }
        
        cout << "Queue elements: ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % SIZE;
        }
        cout << endl;
        cout << "Front: " << front << ", Rear: " << rear << endl;
    }
};

int main() {
    CircularQueue q;
    
    cout << "=== Circular Queue Enqueue Demo ===" << endl;
    
    q.enqueue(10);
    q.display();
    
    q.enqueue(20);
    q.display();
    
    q.enqueue(30);
    q.display();
    
    q.enqueue(40);
    q.display();
    
    cout << "\nNote: One space is kept empty to distinguish full from empty" << endl;
    cout << "Attempting to enqueue 5th element:" << endl;
    q.enqueue(50);
    
    return 0;
}