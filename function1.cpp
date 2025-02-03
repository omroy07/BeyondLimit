#include <iostream>
using namespace std;
// Function to calculate the GCD of two numbers
int gcd(int a, int b) {
    // Base case: if b is 0, return a
    if (b == 0)
        return a;
    // Recursive case: call gcd with b and the remainder of a/b
    return gcd(b, a % b);
}
int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << endl;
    return 0;
}
