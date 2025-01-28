#include <iostream>

int main() {
    // Declare an array of size 5
    int arr[5] = {10, 20, 30, 40, 50};

    // Accessing array elements
    std::cout << "Array elements: " << std::endl;
    for(int i = 0; i < 5; i++) {
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
    }

    return 0;
}
