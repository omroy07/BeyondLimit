#include <iostream>
using namespace std;
int main() {
    int var = 42;              // A normal integer variable
    int* ptr = &var;         // Pointer variable that holds the address of var
    cout << "Value of var: " << var << endl;              // Output the value of var
    cout << "Address of var: " << &var << endl;           // Output the address of var
    cout << "Value of ptr: " << ptr << endl;              // Output the address stored in ptr
    cout << "Value pointed to by ptr: " << *ptr << endl;  // Dereferencing ptr to get the value of var
    *ptr = 100;    // Modifying the value using the pointer
    cout << "New value of var: " << var << endl;          // Output the new value of var
    return 0;
}
