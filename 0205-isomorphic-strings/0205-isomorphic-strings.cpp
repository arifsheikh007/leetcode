class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mp;
        unordered_map<char, char> rev;

        if (s.length() != t.length()){
            return false;
        }

        for (int i = 0; i < s.length(); i++){
            if (mp.count(s[i])){
                if (mp[s[i]] != t[i]){
                    return false;
                }
            }
            else{
                if (rev.count(t[i])){
                    return false;
                }
                mp[s[i]] = t[i];
                rev[t[i]] = s[i];
            }
        }
        return true;
    }
};