#include <iostream>
using namespace std;

int main() {
    int num = 20;
    int *ptr = &num; // Pointer storing the address of num

    cout << "Before modifying via pointer: " << num << endl;
    *ptr = 60; // Modifying value using pointer
    cout << "After modifying via pointer: " << num << endl;

    return 0;
}
