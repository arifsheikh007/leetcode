class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int maxLength = 0;
        int prefix = 0;

        unordered_map<int, int> mp;
        mp[0] = -1;

        for (int i = 0; i < nums.size(); i++) {

            if (nums[i] == 0) {
                prefix -= 1;
            }
            else {
                prefix += 1;
            }

            if (mp.find(prefix) != mp.end()) {
                int length = i - mp[prefix];
                maxLength = max(maxLength, length);
            }
            else {
                mp[prefix] = i;
            }
        }

        return maxLength;
    }
};