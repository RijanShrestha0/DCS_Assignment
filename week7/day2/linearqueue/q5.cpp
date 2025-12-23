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
    
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty! Nothing to display." << endl;
            return;
        }
        
        cout << "Queue elements (Front to Rear): ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i];
            if (i < rear) cout << " <- ";
        }
        cout << endl;
        cout << "Front index: " << front << ", Rear index: " << rear << endl;
    }
};

int main() {
    LinearQueue q;
    
    cout << "=== Queue Traversal/Display Demo ===" << endl;
    
    cout << "\nDisplaying empty queue:" << endl;
    q.display();
    
    cout << "\nAdding elements and displaying:" << endl;
    q.enqueue(5);
    q.display();
    
    cout << endl;
    q.enqueue(10);
    q.display();
    
    cout << endl;
    q.enqueue(15);
    q.display();
    
    cout << endl;
    q.enqueue(20);
    q.display();
    
    cout << endl;
    q.enqueue(25);
    q.display();
    
    return 0;
}