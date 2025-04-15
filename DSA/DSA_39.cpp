#include <iostream>
using namespace std;
// Node structure
struct Node {
    int data;
    Node* next;
};
// Circular Linked List class
class CircularLinkedList {
private:
    Node* last;
public:
    CircularLinkedList() {
        last = nullptr;
    }
    // Function to insert a node at the end
    void insertEnd(int value) {
        Node* newNode = new Node();
        newNode->data = value;

        if (last == nullptr) {
            newNode->next = newNode;
            last = newNode;
        } 
        else {
            newNode->next = last->next;
            last->next = newNode;
            last = newNode;
        }
    }
    // Function to insert a node at the beginning
    void insertBegin(int value) {
        Node* newNode = new Node();
        newNode->data = value;

        if (last == nullptr) {
            newNode->next = newNode;
            last = newNode;
        } 
        else {
            newNode->next = last->next;
            last->next = newNode;
        }
    }
    // Function to display the circular linked list
    void display() {
        if (last == nullptr) {
            cout << "List is empty." << endl;
            return;
        }
        Node* temp = last->next;
        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != last->next);
        cout << "(back to start)" << endl;
    }
    // Destructor to free memory
    ~CircularLinkedList() {
        if (last == nullptr) return;

        Node* current = last->next;
        Node* nextNode;

        while (current != last) {
            nextNode = current->next;
            delete current;
            current = nextNode;
        }

        delete last;
    }
};
// Main function
int main() {
    CircularLinkedList cll;
    cll.insertEnd(10);
    cll.insertEnd(20);
    cll.insertBegin(5);
    cll.insertEnd(30);
    cout << "Circular Linked List: ";
    cll.display();
    return 0;
}
