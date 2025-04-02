#include <iostream>
using namespace std;
// Pass by Value
void passByValue(int x) {
    x = x + 10;  // Change does not affect the original variable
}
// Pass by Reference
void passByReference(int &x) {
    x = x + 10;  // Modifies the original variable
}
// Pass by Address (Pointer)
void passByAddress(int *x) {
    *x = *x + 10;  // Modifies the original variable using a pointer
}
int main() {
    int a = 5, b = 10, c = 15;
    passByValue(a);
    cout << "After Pass by Value, a = " << a << endl;  // Output: 5 (unchanged)
    passByReference(b);
    cout << "After Pass by Reference, b = " << b << endl;  // Output: 20 (modified)
    passByAddress(&c);
    cout << "After Pass by Address, c = " << c << endl;  // Output: 25 (modified)
    return 0;
}
