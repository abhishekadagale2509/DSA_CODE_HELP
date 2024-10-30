#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &arr, int m) {
    int s = m + 1, e = arr.size() - 1;
    while (s <= e) {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

void print(const vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int m = 3;

    cout << "Original array: ";
    print(arr);

    reverseArray(arr, m);

    cout << "Array after reversing from index " << m + 1 << " to end: ";
    print(arr);

    return 0;
}

