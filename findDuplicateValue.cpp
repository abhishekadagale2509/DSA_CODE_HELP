#include<vector>
using namespace std;
int findDuplicate(vector<int> &arr) 
{
    int ans = 0;
    
    //XOR ing all array elements
    for(int i = 0; i<arr.size(); i++ ) {
    	ans = ans^arr[i];
    }
	
    //XOR [1, n-1]
    for(int i = 1; i<arr.size();i++ ) {
    	ans = ans^i;
    }
    return ans;
}
/*#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> duplicates;
        
        for (int i = 0; i < nums.size(); i++) {
            int idx = abs(nums[i]) - 1; // map value to index
            if (nums[idx] < 0) {
                duplicates.push_back(abs(nums[i])); // duplicate found
            } else {
                nums[idx] = -nums[idx]; // mark as visited
            }
        }
        
        return duplicates;
    }
};
Example walkthrough
Input:

ini
Copy
Edit
nums = [4,3,2,7,8,2,3,1]
i=0 → val=4 → mark index 3 negative
nums = [4,3,2,-7,8,2,3,1]

i=1 → val=3 → mark index 2 negative
nums = [4,3,-2,-7,8,2,3,1]

i=2 → val=2 → mark index 1 negative
nums = [4,-3,-2,-7,8,2,3,1]

i=3 → val=7 → mark index 6 negative
nums = [4,-3,-2,-7,8,2,-3,1]

i=4 → val=8 → mark index 7 negative
nums = [4,-3,-2,-7,8,2,-3,-1]

i=5 → val=2 → index 1 already negative → duplicate 2

i=6 → val=3 → index 2 already negative → duplicate 3

i=7 → val=1 → mark index 0 negative*/