#include <iostream>
using namespace std;
// Node structure to represent each element in the queue
struct Node {
    int data;
    Node* next;
    // Constructor to create a new node
    Node(int value) {
        data = value;
        next = nullptr;
    }
};
// Queue class using a linked list
class Queue {
private:
    Node* front;  // Points to the front of the queue
    Node* rear;   // Points to the rear of the queue
public:
    // Constructor to initialize the queue
    Queue() {
        front = rear = nullptr;  // Initially both front and rear are null
    }
    // Destructor to free up memory
    ~Queue() {
        while (!isEmpty()) {
            dequeue();
        }
    }
    // Check if the queue is empty
    bool isEmpty() {
        return front == nullptr;
    }
    // Enqueue an element to the rear of the queue
    void enqueue(int x) {
        Node* newNode = new Node(x);  // Create a new node with the given value
        if (rear == nullptr) {  // If the queue is empty
            front = rear = newNode;  // Both front and rear point to the new node
        } else {
            rear->next = newNode;  // Link the current rear to the new node
            rear = newNode;  // Update rear to point to the new node
        }

        cout << "Enqueued " << x << " to the queue.\n";
    }
    // Dequeue an element from the front of the queue
    int dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow: Cannot dequeue, the queue is empty.\n";
            return -1;  // Return an invalid value to indicate error
        }
        Node* temp = front;  // Store the front node temporarily
        int dequeuedValue = front->data;  // Get the data of the front node
        front = front->next;  // Move front to the next node
        // If the queue becomes empty after dequeue, update rear to nullptr
        if (front == nullptr) {
            rear = nullptr;
        }
        delete temp;  // Deallocate memory of the dequeued node
        cout << "Dequeued " << dequeuedValue << " from the queue.\n";
        return dequeuedValue;
    }
    // Peek at the front element of the queue
    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return -1;  // Return an invalid value to indicate error
        }
        return front->data;  // Return the data at the front of the queue
    }
    // Display the elements in the queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
        } else {
            Node* temp = front;
            cout << "Queue elements are: ";
            while (temp != nullptr) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }
};
// Driver program to test the queue implementation
int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.display();  // Display the current queue
    q.dequeue();  // Dequeue 10
    q.dequeue();  // Dequeue 20
    q.display();  // Display the current queue
    cout << "Front element is " << q.peek() << endl;  // Peek at the front element
    return 0;
}
