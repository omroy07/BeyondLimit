#include <iostream>
using namespace std;

int main() {
    int num = 100;
    int *ptr = &num;
    int **ptr2 = &ptr; // Pointer to pointer

    cout << "Value of num: " << num << endl;
    cout << "Value using ptr: " << *ptr << endl;
    cout << "Value using ptr: " << ptr << endl;
    cout << "Value using ptr2: " << **ptr2 << endl; // Double dereferencing
    cout << "Value using ptr2: " << *ptr2 << endl;

    return 0;
}
