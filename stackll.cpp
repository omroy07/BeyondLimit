#include <iostream>
using namespace std;
// Node structure to represent each element in the stack
struct Node {
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = nullptr;
    }
};
// Stack class using a linked list
class Stack {
private:
    Node* top;  // Points to the top of the stack
public:
    // Constructor to initialize the stack
    Stack() {
        top = nullptr;  // Stack is empty initially
    }
    // Destructor to free up the memory when stack is destroyed
    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }
    // Check if the stack is empty
    bool isEmpty() {
        return top == nullptr;
    }
    // Push an element onto the stack
    void push(int x) {
        Node* newNode = new Node(x);  // Create a new node with value x
        newNode->next = top;  // Link the new node to the current top
        top = newNode;  // Update top to the new node
        cout << "Pushed " << x << " onto the stack.\n";
    }
    // Pop an element from the stack
    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow: Cannot pop, stack is empty.\n";
            return -1;  // Return -1 to indicate an error
        } else {
            Node* temp = top;  // Temporarily store the top node
            int poppedValue = top->data;  // Store the value of the top node
            top = top->next;  // Update top to the next node
            delete temp;  // Free the memory of the popped node
            cout << "Popped " << poppedValue << " from the stack.\n";
            return poppedValue;
        }
    }
    // Peek at the top element of the stack
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return -1;  // Return -1 to indicate the stack is empty
        } else {
            return top->data;  // Return the data of the top element
        }
    }
    // Display the elements of the stack
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
        } else {
            Node* temp = top;
            cout << "Stack elements are: ";
            while (temp != nullptr) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }
};
// Driver program to test the stack implementation
int main() {
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);  
    stack.display();  // Display the current stack
    stack.pop();  // Pops 50
    stack.pop();  // Pops 40
    stack.display();  // Display the current stack
    cout << "Top element is " << stack.peek() << endl;  // Peek at the top element
    return 0;
}
