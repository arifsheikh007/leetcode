class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> countP(26, 0);
        vector<int> countS(26, 0);
        vector<int> ans;

        if (p.length() > s.length()) {
            return ans;
        }
        for (char ch : p) {
            countP[ch - 'a']++;
        }
        for (int i = 0; i < p.length(); i++) {
            countS[s[i] - 'a']++;
        }
        if (countP == countS) {
            ans.push_back(0);
        }

        int left = 0;
        for (int right = p.length(); right < s.length(); right++) {
            countS[s[right] - 'a']++;
            countS[s[left] - 'a']--;
            left++;
            if (countP == countS) {
                ans.push_back(left);
            }
        }
        return ans;
    }
};