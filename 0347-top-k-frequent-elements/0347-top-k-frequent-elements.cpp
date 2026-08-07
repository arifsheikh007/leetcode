class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }

        vector<vector<int>> bucket(nums.size() + 1);
        for (auto it : mp){
            bucket[it.second].push_back(it.first);
        }
        for (int i = nums.size(); i >= 1; i--){
            for (int num : bucket[i]){
                ans.push_back(num);
                if (ans.size() == k){
                    return ans;
                }
            }
        }
        return ans;
    }
};