class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int startRow = 0, endRow = m - 1;
        while (startRow <= endRow){
            int midRow = startRow + (endRow - startRow)/2;
            if (target >= matrix[midRow][0] && target <= matrix[midRow][n - 1]){
                for (int i = 0; i < n; i++){
                if (matrix[midRow][i] == target){
                    return true;
                }
                }
                return false;
            }
            else if (target >= matrix[midRow][0]){
                startRow = midRow + 1;
            }
            else{
                endRow = midRow - 1;
            }
        }
        return false;
    }
};