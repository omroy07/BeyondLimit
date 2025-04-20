#include <iostream>
#define SIZE 100 // maximum size of the stack
using namespace std;
class Stack {
private:
    int arr[SIZE];  // array to store stack elements
    int top;        // index of the top element
public:
    Stack() {
        top = -1;  // stack is initially empty
    }
    // Push an element onto the stack
    void push(int x) {
        if (top >= SIZE - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
        cout << x << " pushed to stack\n";
    }
    // Pop the top element from the stack
    int pop() {
        if (top < 0) {
            cout << "Stack Underflow\n";
            return -1;
        }
        return arr[top--];
    }
    // Peek at the top element without removing it
    int peek() {
        if (top < 0) {
            cout << "Stack is Empty\n";
            return -1;
        }
        return arr[top];
    }
    // Check if the stack is empty
    bool isEmpty() {
        return top < 0;
    }
};
int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout << "Top element is " << s.peek() << "\n";
    cout << s.pop() << " popped from stack\n";
    cout << "Top element is " << s.peek() << "\n";
    return 0;
}
