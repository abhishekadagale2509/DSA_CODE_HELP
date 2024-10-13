#include<iostream>
using namespace std;

int findUnique(int arr[], int size) {
    int unique = 0; // Initialize with 0 (identity for XOR)
    for (int i = 0; i < size; i++) {
        unique = unique ^ arr[i]; // XOR all elements
    }
    return unique;
}

int main() {
    int arr[7] = {1, 5, 2, 3, 5, 1, 2}; // Example array, 3 is unique
    
    int uniqueNumber = findUnique(arr, 7);
    
    cout << "The unique number is: " << uniqueNumber << endl;

    return 0;
}
