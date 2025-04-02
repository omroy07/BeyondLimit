#include <iostream>
using namespace std;

int main() {
    int num = 10;  // A normal integer variable
    int *ptr = &num; // Pointer storing the address of num

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Pointer ptr holds address: " << ptr << endl;
    cout << "Value at ptr (Dereferencing): " << *ptr << endl; // Dereferencing

    return 0;
}
