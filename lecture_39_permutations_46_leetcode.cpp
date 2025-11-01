#include <iostream>
#include <vector>
using namespace std;

class Solution {
private:
    void solve(vector<int> nums, vector<vector<int>>& ans, int index) {
        // base case
        if (index >= nums.size()) {
            ans.push_back(nums);
            return;
        }

        for (int j = index; j < nums.size(); j++) {
            // swap current element with jth
            swap(nums[index], nums[j]);

            // recursive call for the next index
            solve(nums, ans, index + 1);

            // backtrack to restore original order
            swap(nums[index], nums[j]);
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index = 0;
        solve(nums, ans, index);
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> result = s.permute(nums);

    for (auto& vec : result) {
        for (int val : vec)
            cout << val << " ";
        cout << endl;
    }
    return 0;
}
