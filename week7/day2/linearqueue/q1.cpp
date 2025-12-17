#include <iostream>
using namespace std;

#define SIZE 5

class LinearQueue {
private:
    int arr[SIZE];
    int front;
    int rear;
    
public:
    LinearQueue() : front(-1), rear(-1) {
        cout << "Linear Queue created with size " << SIZE << endl;
    }
    
    bool isEmpty() {
        return (front == -1);
    }
    
    bool isFull() {
        return (rear == SIZE - 1);
    }
    
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue Overflow! Cannot insert " << value << endl;
            return;
        }
        
        if (front == -1) {
            front = 0;
        }
        
        rear++;
        arr[rear] = value;
        cout << "Enqueued: " << value << endl;
    }
    
    int dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow! Queue is empty." << endl;
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
    
    cout << "\nPerforming queue operations:" << endl;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    
    q.dequeue();
    q.display();
    
    return 0;
}