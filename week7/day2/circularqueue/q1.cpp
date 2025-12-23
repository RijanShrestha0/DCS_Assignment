#include <iostream>
using namespace std;

#define SIZE 5

class CircularQueue {
private:
    int arr[SIZE];
    int front;
    int rear;
    
public:
    CircularQueue() : front(-1), rear(-1) {
        cout << "Circular Queue created with size " << SIZE << endl;
    }
    
    bool isEmpty() {
        return (front == -1);
    }
    
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
    
    cout << "\nPerforming circular queue operations:" << endl;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    
    q.dequeue();
    q.display();
    
    cout << "\nDemonstrating circular nature:" << endl;
    q.enqueue(40);
    q.enqueue(50);
    q.display();
    
    return 0;
}