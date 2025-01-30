#include <iostream>  // For input/output operations
using namespace std;
int main() {
    // Declare variables
    int number;
    // Output a message to the console
    cout << "Enter a number: ";
    // Input from the user
    cin >> number;
    // Conditional statement to check if the number is even or odd
    if (number % 2 == 0) {
        cout << number << " is even." << endl;
    } else {
        cout << number << " is odd." << endl;
    }
    // Loop to count down from the number
    cout << "Counting down: ";
    for (int i = number; i >= 0; i--) {
        cout << i << " ";
    }
    cout << endl;  // End the output with a newline
    return 0;  // Return 0 to indicate successful execution
}
