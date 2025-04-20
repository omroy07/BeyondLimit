#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class Stack {
private:
    Node* top;

public:
    Stack() {
        top = nullptr;
    }

    bool isEmpty() {
        return top == nullptr;
    }

    void push(int val) {
        Node* newNode = new Node(val);
        newNode->next = top;
        top = newNode;
        cout << "Pushed " << val << " onto the stack." << endl;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow. Cannot pop from an empty stack." << endl;
            return;
        }

        Node* temp = top;
        cout << "Popped " << top->data << " from the stack." << endl;
        top = top->next;
        delete temp;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty. No top element." << endl;
            return -1;
        }
        return top->data;
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }

        Node* current = top;
        cout << "Stack (top to bottom): ";
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }
};

// Example usage
int main() {
    Stack stack;

    stack.push(100);
    stack.push(200);
    stack.push(300);
    stack.push(400);

    stack.display();
    cout << "Top element is: " << stack.peek() << endl;

    stack.pop();
    stack.display();

    return 0;
}
