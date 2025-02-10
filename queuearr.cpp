#include <iostream>
using namespace std;
class Queue {
private:
    int* arr;       // Array to hold queue elements
    int front;      // Index of the front element
    int rear;       // Index of the rear element
    int size;       // Maximum size of the queue
    int count;      // Number of elements currently in the queue
public:
    // Constructor to initialize the queue
    Queue(int capacity) {
        size = capacity;
        arr = new int[size];
        front = 0;
        rear = -1;
        count = 0;
    }
    // Destructor to deallocate the array
    ~Queue() {
        delete[] arr;
    }
    // Check if the queue is empty
    bool isEmpty() {
        return count == 0;
    }
    // Check if the queue is full
    bool isFull() {
        return count == size;
    }
    // Enqueue an element to the rear of the queue
    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue Overflow: Cannot enqueue " << x << ", queue is full.\n";
            return;
        }
        // Move rear to the next position (circularly)
        rear = (rear + 1) % size;
        arr[rear] = x;
        count++;
        cout << "Enqueued " << x << " to the queue.\n";
    }
    // Dequeue an element from the front of the queue
    int dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow: Cannot dequeue, queue is empty.\n";
            return -1; // Indicating an error (queue is empty)
        }
        int dequeuedValue = arr[front];
        // Move front to the next position (circularly)
        front = (front + 1) % size;
        count--;
        cout << "Dequeued " << dequeuedValue << " from the queue.\n";
        return dequeuedValue;
    }
    // Peek at the front element of the queue
    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return -1;
        }
        return arr[front];
    }
    // Display the elements of the queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return;
        }
        cout << "Queue elements are: ";
        for (int i = 0; i < count; i++) {
            cout << arr[(front + i) % size] << " ";
        }
        cout << endl;
    }
};
// Driver program to test the queue implementation
int main() {
    Queue q(5);  // Create a queue with size 5
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.display();  // Display the current queue
    q.enqueue(60);  // This will show Queue Overflow, as the size is 5
    q.dequeue();  // Dequeue 10
    q.dequeue();  // Dequeue 20
    q.display();  // Display the current queue
    cout << "Front element is " << q.peek() << endl;  // Peek at the front element
    return 0;
}
