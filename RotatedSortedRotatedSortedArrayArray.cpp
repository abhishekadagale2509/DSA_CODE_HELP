#include<iostream>
#include<vector>
using namespace std;

int getpivot(vector<int>& arr, int n) {
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    
    while (s < e) { 
        if (arr[mid] >= arr[0]) { 
            s = mid + 1; // Pivot is in the right part of the array
        } else {
            e = mid; // Pivot could be at mid or before
        }
        mid = s + (e - s) / 2;
    }
    
    return s; // s will point to the pivot
}

int binarySearch(vector<int>& arr, int s, int e, int k) {
    int mid = s + (e - s) / 2;
    while (s <= e) {
        if (arr[mid] == k) {
            return mid;
        }
        if (k > arr[mid]) {
            s = mid + 1;
        } else {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int search(vector<int>& arr, int n, int k) {
    int pivot = getpivot(arr, n);

    // If k lies in the right sorted half
    if (k >= arr[pivot] && k <= arr[n - 1]) {
        return binarySearch(arr, pivot, n - 1, k);
    } 
    // If k lies in the left sorted half
    else {
        return binarySearch(arr, 0, pivot - 1, k);
    }
}

int main() {
    vector<int> arr = {7, 9, 1, 2, 3}; // Example rotated sorted array
    int k = 2; // Element to search
    int n = arr.size();
    
    int index = search(arr, n, k);
    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
