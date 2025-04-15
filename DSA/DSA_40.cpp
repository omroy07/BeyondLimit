#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
    Node* prev;
};

// Doubly Circular Linked List class
class DoublyCircularLinkedList {
private:
    Node* head;

public:
    DoublyCircularLinkedList() {
        head = nullptr;
    }

    // Insert a node at the end
    void insertEnd(int value) {
        Node* newNode = new Node();
        newNode->data = value;

        if (head == nullptr) {
            newNode->next = newNode;
            newNode->prev = newNode;
            head = newNode;
        } 
        else {
            Node* tail = head->prev;

            newNode->next = head;
            newNode->prev = tail;

            tail->next = newNode;
            head->prev = newNode;
        }
    }

    // Display list forward
    void displayForward() {
        if (head == nullptr) {
            cout << "List is empty.\n";
            return;
        }

        Node* temp = head;
        cout << "Forward: ";
        do {
            cout << temp->data << " <-> ";
            temp = temp->next;
        } while (temp != head);
        cout << "(back to start)" << endl;
    }

    // Display list backward
    void displayBackward() {
        if (head == nullptr) {
            cout << "List is empty.\n";
            return;
        }

        Node* tail = head->prev;
        Node* temp = tail;
        cout << "Backward: ";
        do {
            cout << temp->data << " <-> ";
            temp = temp->prev;
        } while (temp != tail);
        cout << "(back to end)" << endl;
    }

    // Destructor to free memory
    ~DoublyCircularLinkedList() {
        if (head == nullptr) return;

        Node* current = head->next;
        while (current != head) {
            Node* next = current->next;
            delete current;
            current = next;
        }
        delete head;
    }
};

// Main function
int main() {
    DoublyCircularLinkedList dcll;

    dcll.insertEnd(10);
    dcll.insertEnd(20);
    dcll.insertEnd(30);
    dcll.insertEnd(40);

    dcll.displayForward();
    dcll.displayBackward();

    return 0;
}
