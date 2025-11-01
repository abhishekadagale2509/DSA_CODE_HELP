#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
private:
    void solve(string digits, string output, int index, vector<string>& ans, string mapping[]) {
        // base case
        if (index >= digits.length()) {
            ans.push_back(output);
            return;
        }

        int number = digits[index] - '0';
        string value = mapping[number];

        for (int i = 0; i < value.length(); i++) {
            // pick one character
            solve(digits, output + value[i], index + 1, ans, mapping);
        }
    }

public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if (digits.length() == 0)
            return ans;

        string output = "";
        int index = 0;
        string mapping[10] = {
            "",    // 0
            "",    // 1
            "abc", // 2
            "def", // 3
            "ghi", // 4
            "jkl", // 5
            "mno", // 6
            "pqrs",// 7
            "tuv", // 8
            "wxyz" // 9
        };

        solve(digits, output, index, ans, mapping);
        return ans;
    }
};

int main() {
    Solution s;
    string digits;
    cin >> digits;
    vector<string> result = s.letterCombinations(digits);

    for (auto str : result)
        cout << str << " ";
    cout << endl;

    return 0;
}
