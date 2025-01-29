#include <iostream>
using namespace std;
int main() {
    const int size = 5;
    int arr[size];
    // Input elements into array
    cout << "Enter 5 integers: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    // Display the elements
    cout << "You entered: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

