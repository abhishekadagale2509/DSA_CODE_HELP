#include <bits/stdc++.h>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m) {
    vector<int> ans; // Vector to store the result
    int i = 0, j = 0;

    // Loop through both arrays
    while (i < n && j < m) {
        if (arr1[i] == arr2[j]) {
            // If both elements are the same, add to result
            ans.push_back(arr1[i]);
            i++;
            j++;
        } 
        else if (arr1[i] < arr2[j]) {
            // Move the pointer of the smaller element
            i++;
        } 
        else {
            j++;
        }
    }

    return ans;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {2, 3, 5, 7};

    vector<int> result = findArrayIntersection(arr1, arr1.size(), arr2, arr2.size());

    // Print the result
    cout << "Intersection: ";
    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}
