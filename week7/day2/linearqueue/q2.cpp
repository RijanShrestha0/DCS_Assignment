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
        cout << "Successfully enqueued: " << value << endl;
    }
    
    void display() {
        if (front == -1) {
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
    
    cout << "=== Enqueue Operation Demo ===" << endl;
    
    q.enqueue(10);
    q.display();
    
    q.enqueue(20);
    q.display();
    
    q.enqueue(30);
    q.display();
    
    q.enqueue(40);
    q.display();
    
    q.enqueue(50);
    q.display();
    
    cout << "\nAttempting to enqueue when queue is full:" << endl;
    q.enqueue(60);
    
    return 0;
}