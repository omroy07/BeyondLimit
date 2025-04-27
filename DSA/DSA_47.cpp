#include <iostream>
using namespace std;
// Node class
class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};
// Queue class
class Queue {
private:
    Node* front;
    Node* rear;
public:
    Queue() {
        front = rear = nullptr;
    }
    bool isEmpty() {
        return front == nullptr;
    }
    void enqueue(int val) {
        Node* newNode = new Node(val);
        if (isEmpty()) {
            front = rear = newNode;
        } 
        else {
            rear->next = newNode;
            rear = newNode;
        }
        cout << "Enqueued " << val << " to the queue." << endl;
    }
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow. Cannot dequeue." << endl;
            return;
        }
        Node* temp = front;
        cout << "Dequeued " << front->data << " from the queue." << endl;
        front = front->next;
        delete temp;
        if (front == nullptr) {
            rear = nullptr;
        }
    }
    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return -1;
        }
        return front->data;
    }
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        Node* temp = front;
        cout << "Queue (front to rear): ";
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    ~Queue() {
        while (!isEmpty()) {
            dequeue();
        }
    }
};
// Example usage
int main() {
    Queue q;
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
