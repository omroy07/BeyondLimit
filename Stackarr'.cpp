#include <iostream>
using namespace std;
class Stack {
private:
    int *arr;  // Pointer to array that holds the stack elements
    int top;   // Index of the top element
    int capacity;  // Maximum size of the stack
public:
    // Constructor to initialize the stack
    Stack(int size) {
        capacity = size;
        arr = new int[capacity];  // Dynamically allocate memory for stack
        top = -1;  // Stack is empty initially
    }
    // Destructor to free allocated memory
    ~Stack() {
        delete[] arr;
    }
    // Check if the stack is empty
    bool isEmpty() {
        return top == -1;
    }
    // Check if the stack is full
    bool isFull() {
        return top == capacity - 1;
    }
    // Push an element onto the stack
    void push(int x) {
        if (isFull()) {
            cout << "Stack Overflow: Cannot push " << x << ", stack is full.\n";
        } else {
            arr[++top] = x;  // Increment top and insert the element
            cout << "Pushed " << x << " onto the stack.\n";
        }
    }
    // Pop an element from the stack
    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow: Cannot pop, stack is empty.\n";
            return -1;  // Return an invalid value to indicate error
        } else {
            int poppedElement = arr[top--];  // Return the element and decrement top
            cout << "Popped " << poppedElement << " from the stack.\n";
            return poppedElement;
        }
    }
    // Peek at the top element of the stack
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return -1;  // Return an invalid value to indicate error
        } else {
            return arr[top];  // Return the top element
        }
    }
    // Display all elements in the stack
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
        } else {
            cout << "Stack elements are: ";
            for (int i = 0; i <= top; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};
// Driver program to test the stack implementation
int main() {
    Stack stack(5);  // Create a stack of size 5
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);
    stack.push(50);
    stack.push(60);  // Stack overflow since the capacity is 5
    stack.display();  // Display the current stack
    stack.pop();  // Pops 50
    stack.pop();  // Pops 40
    stack.display();  // Display the current stack
    cout << "Top element is " << stack.peek() << endl;  // Peek at the top element
    return 0;
}
