#include <iostream>
using namespace std;
class Queue {
private:
    int front, rear, size;
    int* arr;
public:
    Queue(int capacity) {
        size = capacity;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    bool isEmpty() {
        return front == -1;
    }
    bool isFull() {
        return rear == size - 1;
    }
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue Overflow. Cannot insert " << value << "." << endl;
            return;
        }
        if (isEmpty()) {
            front = 0;
        }
        rear++;
        arr[rear] = value;
        cout << "Enqueued " << value << " to the queue." << endl;
    }
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow. Cannot dequeue." << endl;
            return;
        }
        cout << "Dequeued " << arr[front] << " from the queue." << endl;
        front++;
        if (front > rear) {
            front = rear = -1; // Reset queue
        }
    }
    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return -1;
        }
        return arr[front];
    }
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue (front to rear): ";
        for (int i = front; i <= rear; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    ~Queue() {
        delete[] arr;
    }
};
// Example usage
int main() {
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.display();
    cout << "Front element is: " << q.peek() << endl;
    q.dequeue();
    q.display();
    return 0;
}
