#include <iostream>
using namespace std;

// Node definition
struct Node {
    int data;
    Node* prev;
    Node* next;
};

// Insert at end
void insertEnd(Node*& head, int value) {
    Node* newNode = new Node{value, nullptr, nullptr};

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr)
        temp = temp->next;

    temp->next = newNode;
    newNode->prev = temp;
}

// Forward traversal
void displayForward(Node* head) {
    Node* temp = head;
    cout << "Forward: ";
    while (temp != nullptr) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Reverse traversal
void displayBackward(Node* head) {
    if (!head) return;
    
    Node* temp = head;
    while (temp->next != nullptr)
        temp = temp->next;

    cout << "Backward: ";
    while (temp != nullptr) {
        cout << temp->data << " <-> ";
        temp = temp->prev;
    }
    cout << "NULL" << endl;
}

// Main function
int main() {
    Node* head = nullptr;

    insertEnd(head, 10);
    insertEnd(head, 20);
    insertEnd(head, 30);
    insertEnd(head, 40);

    displayForward(head);
    displayBackward(head);

    return 0;
}
