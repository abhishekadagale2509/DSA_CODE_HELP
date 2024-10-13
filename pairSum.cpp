#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s) {
    // Resultant vector to store pairs
    vector<vector<int>> ans;

    // Loop through each pair of elements
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            // If the pair sums to s
            if (arr[i] + arr[j] == s) {
                vector<int> temp;

                // Store the pair in sorted order
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));

                // Add the pair to the result
                ans.push_back(temp);
            }
        }
    }

    // Sort the result vector of pairs
    sort(ans.begin(), ans.end());
    
    return ans;
}

int main() {
    vector<int> arr = {1, 3, 2, 2, 4, 5};
    int targetSum = 5;

    vector<vector<int>> result = pairSum(arr, targetSum);

    // Print the pairs
    cout << "Pairs with sum " << targetSum << " are:\n";
    for (auto &pair : result) {
        cout << "[" << pair[0] << ", " << pair[1] << "]\n";
    }

    return 0;
}
