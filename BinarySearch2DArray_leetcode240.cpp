class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int rowindex = 0;       // start from first row
        int colindex = col - 1; // start from last column (top-right corner)

        while (rowindex < row && colindex >= 0) {
            int element = matrix[rowindex][colindex];

            if (element == target) {
                return true;   // found target
            }
            if (element < target) {
                rowindex++;    // eliminate this row, move downward
            } else {
                colindex--;    // eliminate this column, move left
            }
        }
        return false; // target not found
    }
};
