#include <iostream>
using namespace std;
int main() {
    int choice;
    // Menu options displayed to the user
    cout << "Menu Options:\n";
    cout << "1. Print 'Hello'\n";
    cout << "2. Print 'World'\n";
    cout << "3. Exit\n";
    // Start a while loop to keep showing the menu until user exits
    while (true) {
        cout << "Enter your choice: ";
        cin >> choice;
        // Switch case statement to handle the menu choices
        switch (choice) {
            case 1:
                cout << "Hello\n";
                break;  // Exit this case and go back to the menu
            case 2:
                cout << "World\n";
                break;  // Exit this case and go back to the menu
            case 3:
                cout << "Exiting...\n";
                return 0;  // End the program
            default:
                cout << "Invalid choice, please try again.\n";
        }
    }
    return 0;  // Return 0 if program ends normally (shouldn't reach here in this case)
}
