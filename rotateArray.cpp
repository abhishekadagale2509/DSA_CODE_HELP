#include <iostream>
using namespace std;

// Function to rotate the array to the left by d positions
void rotateArray(int arr[], int n, int d) {
    // Temporary array to store first d elements
    int temp[d];
    for (int i = 0; i < d; i++) {
        temp[i] = arr[i];
    }

    // Shift the remaining elements of the array to the left
    for (int i = 0; i < n - d; i++) {
        arr[i] = arr[i + d];
    }

    // Move the elements from the temp array to the end
    for (int i = 0; i < d; i++) {
        arr[n - d + i] = temp[i];
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 2; // Number of positions to rotate

    cout << "Original array: ";
    printArray(arr, n);

    rotateArray(arr, n, d);

    cout << "Rotated array: ";
    printArray(arr, n);

    return 0;
}
