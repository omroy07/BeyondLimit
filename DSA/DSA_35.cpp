#include <iostream>
using namespace std;
int main() {
    // Dynamically allocate memory for an integer
    int* ptr = new int(42);

    // Check if memory allocation was successful
    if (ptr) {
        cout << "Dynamically allocated value: " << *ptr << '\n';
        cout << "Dynamically allocated address: " << ptr << '\n';
    } 
    else {
        cerr << "Memory allocation failed!\n";
        return 1; // Return error code
    }

    // Free allocated memory
    delete ptr;
    ptr = nullptr; // Prevent dangling pointer

    return 0;
}
