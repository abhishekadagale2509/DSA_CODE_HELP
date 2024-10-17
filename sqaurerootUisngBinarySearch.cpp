#include <iostream> // Include the necessary header for input/output

using namespace std; // Use the standard namespace to avoid prefixing std::

// Solution class to calculate the square root
class Solution {
public:
    long long int binarySearch(int n) {
        int s = 0;
        int e = n;
        long long int mid = s + (e - s) / 2;
        long long int ans = -1;

        while (s <= e) {
            long long int square = mid * mid;

            if (square == n) {
                return mid; // Exact square root found
            }

            if (square < n) {
                ans = mid; // Storing the nearest integer part of the square root
                s = mid + 1;
            } else {
                e = mid - 1;
            }

            mid = s + (e - s) / 2;
        }

        return ans; // Return the closest integer part of the square root
    }

    int mySqrt(int x) {
        return binarySearch(x); // Calling the binary search method within the same class
    }
};

// Main function to run the solution
int main() {
    Solution solution;
    int result = solution.mySqrt(10);
    cout << "The integer part of the square root of 10 is: " << result << endl;
}
