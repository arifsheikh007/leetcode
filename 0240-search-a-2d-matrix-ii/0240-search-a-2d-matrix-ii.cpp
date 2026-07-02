class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = 0, column = matrix[0].size() - 1;
        while (column >= 0 && row < matrix.size()){
            if (target == matrix[row][column]){
                return true;
            }
            else if (target < matrix[row][column]){
                column--;
            }
            else{
                row++;
            }
        }
        return false;
    }
};