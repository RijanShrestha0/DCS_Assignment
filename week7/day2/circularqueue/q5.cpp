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
        if ((rear + 1) % SIZE == front) {
            cout << "Queue is full!" << endl;
            return;
        }
        if (front == -1) front = 0;
        rear = (rear + 1) % SIZE;
        arr[rear] = value;
    }
    
    int dequeue() {
        if (isEmpty()) return -1;
        int value = arr[front];
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % SIZE;
        }
        return value;
    }
    
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty! Nothing to display." << endl;
            return;
        }
        
        cout << "Circular Queue elements (Front to Rear): ";
        int i = front;
        while (true) {
            cout << arr[i];
            if (i == rear) break;
            cout << " <- ";
            i = (i + 1) % SIZE;
        }
        cout << endl;
        cout << "Front index: " << front << ", Rear index: " << rear << endl;
    }
    
    void showArrayState() {
        cout << "Internal array: [";
        for (int i = 0; i < SIZE; i++) {
            if (i > 0) cout << ", ";
            if (i == front && i == rear) {
                cout << arr[i] << "(F,R)";
            } else if (i == front) {
                cout << arr[i] << "(F)";
            } else if (i == rear) {
                cout << arr[i] << "(R)";
            } else {
                cout << arr[i];
            }
        }
        cout << "]" << endl;
    }
};

int main() {
    CircularQueue q;
    
    cout << "=== Circular Queue Traversal/Display Demo ===" << endl;
    
    cout << "\nDisplaying empty queue:" << endl;
    q.display();
    
    cout << "\nAdding elements:" << endl;
    q.enqueue(5);
    q.display();
    q.showArrayState();
    
    cout << endl;
    q.enqueue(10);
    q.enqueue(15);
    q.display();
    q.showArrayState();
    
    cout << "\nDequeuing two elements:" << endl;
    q.dequeue();
    q.dequeue();
    q.display();
    q.showArrayState();
    
    cout << "\nAdding elements (demonstrating wrap-around):" << endl;
    q.enqueue(20);
    q.enqueue(25);
    q.enqueue(30);
    q.display();
    q.showArrayState();
    
    return 0;
}