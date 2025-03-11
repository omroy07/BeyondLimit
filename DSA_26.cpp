#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
// Function to perform Counting Sort
void countingSort(vector<int>& arr) {
    // Find the maximum value in the array to determine the range
    int max_val = *max_element(arr.begin(), arr.end());
    // Create a frequency array (count array) of size max_val + 1
    vector<int> count(max_val + 1, 0);
    // Count the occurrences of each element in the input array
    for (int num : arr) {
        count[num]++;
    }
    // Reconstruct the sorted array from the count array
    int index = 0;
    for (int i = 0; i <= max_val; i++) {
        while (count[i] > 0) {
            arr[index++] = i;
            count[i]--;
        }
    }
}
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    countingSort(arr);
    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
