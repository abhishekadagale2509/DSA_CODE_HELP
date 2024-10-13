#include<iostream>
using namespace std;

void swapAlternate(int arr[], int size) {
    int start=arr[0];
    int end=size-1;
    for (int i = 0; i < size; i++) {
        
        if(start<=end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
        }
        
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[5] = {1, 5, 4, 3, 8};
    
    // Print original array
    cout << "Original array: ";
    printArray(arr, 5);

    // Swap alternate elements
    swapAlternate(arr, 5);

    // Print array after swapping
    cout << "Array after swapping: ";
    printArray(arr, 5);

    return 0;
}
/*#include<iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    int start = 0;    // Start from the beginning
    int end = size - 1; // Start from the end
    while (start < end) {  // Continue until start meets end
        // Swap the elements at start and end
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[5] = {1, 5, 4, 3, 8};
    
    // Print original array
    cout << "Original array: ";
    printArray(arr, 5);

    // Reverse the array
    reverseArray(arr, 5);

    // Print array after reversing
    cout << "Array after reversing: ";
    printArray(arr, 5);

    return 0;
}
Original array: 1 5 4 3 8 
Array after reversing: 8 3 4 5 1 
*/