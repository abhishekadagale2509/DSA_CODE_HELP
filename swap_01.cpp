#include<iostream>
using namespace std;

void printarr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapZeroesAndOnes(int arr[], int n) {
    int left = 0, right = n - 1;
    
    // Using two pointers to swap 0's and 1's
    while (left < right) {
        // Increment left pointer if it points to 0
        while (arr[left] == 0 && left < right) {
            left++;
        }
        // Decrement right pointer if it points to 1
        while (arr[right] == 1 && left < right) {
            right--;
        }
        // Swap if left is less than right
        if (left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main() {
    int arr[5] = {0, 1, 1, 0, 1};

    cout << "Original array: ";
    printarr(arr, 5);
    
    swapZeroesAndOnes(arr, 5);
    
    cout << "Array after swapping: ";
    printarr(arr, 5);
    
    return 0;
}
