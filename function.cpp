#include <iostream>
using namespace std;
// Function to product two numbers
int pro(int a, int b) {
    return a * b;
}
int main() {
    int num1, num2;
    // Input two numbers
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    // Call the Pro function and display the result
   // int result = pro(num1, num2);
    cout << "The product is: " <<pro(num1, num2)<< endl;
    return 0;
}
