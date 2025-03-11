#include <iostream>
#include <vector>
using namespace std;

void printArray(const vector<int>& arr) {
    for (int num : arr) cout << num << " ";
    cout << endl;
}

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high], i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) swap(arr[++i], arr[j]);
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    cout << "Original array: ";
    printArray(arr);
    quickSort(arr, 0, arr.size() - 1);
    cout << "Sorted array: ";
    printArray(arr);
    return 0;
}
