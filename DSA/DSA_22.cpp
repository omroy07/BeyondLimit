#include <iostream>
using namespace std;

// Function to perform selection sort
void selectionSort(int arr[], int n) {
    // Outer loop to move through each element of the array
    for (int i = 0; i < n - 1; i++) {
        // Assume that the current index holds the minimum value
        int minIndex = i;
        
        // Inner loop to find the smallest element in the unsorted part of the array
        for (int j = i + 1; j < n; j++) {
            // If a smaller element is found, update minIndex
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        
        // Swap the minimum element found with the element at index i
        if (minIndex != i) {
            swap(arr[i], arr[minIndex]);
        }
        
        // Optional: Print the array after each step to visualize sorting
        cout << "Step " << i + 1 << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

// Main function to test the selection sort
int main() {
    int arr[] = {10, 20, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Call selectionSort function
    selectionSort(arr, n);
    
    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Call selectionSort function
    // selectionSort(arr, n);
    
    // // Print the sorted array
    // cout << "Sorted array: ";
    // for (int i = 0; i < n; i++) {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    
    return 0;
}
