class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        for (int i = left; i <= right; i++){
            bool covered = false;
            for (int j = 0; j < ranges.size(); j++){
                if (i >= ranges[j][0] && i <= ranges[j][1]){
                    covered = true;
                }
            }
            if (!covered){
                return false;
            }
        }
        return true;
    }
};