#include <iostream>
using namespace std;
int main() {
    int var = 42;              // A normal integer variable
    int& ref = var;           // Reference variable that refers to var
    cout << "Value of var: " << var << endl;              // Output the value of var
    cout << "Value of ref: " << ref << endl;              // Output the value of the reference
    ref = 100;   // Modifying the value using the reference
    cout << "New value of var: " << var << endl;          // Output the new value of var
    cout << "New value of ref: " << ref << endl;          // Output the value of the reference
    return 0;
}
