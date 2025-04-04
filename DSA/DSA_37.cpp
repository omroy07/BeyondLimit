#include <iostream>
using namespace std;
// Define a Node
struct Node {
  int data;
  Node* next;
};
// Insert at the end
void insert(Node*& head, int value) {
  Node* newNode = new Node();
  newNode->data = value;
  newNode->next = nullptr;
  if (head == nullptr) {
    head = newNode;
  } 
  else {
    Node* temp = head;
    while (temp->next != nullptr)
      temp = temp->next;
      temp->next = newNode;
  }
}
// Traverse and print the list
void display(Node* head) {
  Node* temp = head;
  while (temp != nullptr) {
    cout << temp->data << " -> ";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}
// Main function
int main() {
  Node* head = nullptr;
  insert(head, 10);
  insert(head, 20);
  insert(head, 30);
  insert(head, 40);
  cout << "Linked List: ";
  display(head);
  return 0;
}
