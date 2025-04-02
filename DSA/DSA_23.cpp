#include <iostream>
using namespace std;

// Function to perform insertion sort
void insertionSort(int arr[], int n) {

    // Traverse from the second element to the last element
    for (int i = 1; i < n; i++) {

        // Store the current element to be inserted
        int key = arr[i];

        // Initialize the previous index
        int j = i - 1;

        // Move elements that are greater than 'key' one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; // Shift element to the right
            j--; // Move to the previous index
        }

        // Insert the 'key' in its correct position
        arr[j + 1] = key;

        // Output the array after each pass (for better understanding)
        cout << "Pass " << i << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Input array
    int arr[] = {12, 11, 13, 5, 6};

    // Calculate size of array
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Call the insertion sort function
    insertionSort(arr, n);

    // Output the sorted array
    cout << "\nSorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
