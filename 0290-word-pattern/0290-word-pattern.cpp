class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> mp;
        unordered_map<string, char> rev;
        vector<string> words;
        stringstream ss(s);
        string word;
        while (ss >> word){
            words.push_back(word);
        }
        if (pattern.length() != words.size()){
            return false;
        }
        for (int i = 0; i < words.size(); i++){
            if  (mp.count(pattern[i])){
                if (mp[pattern[i]] != words[i]){
                    return false;
                }
            }
            else {
                if (rev.count(words[i])){
                    return false;
                }
                mp[pattern[i]] = words[i];
                rev[words[i]] = pattern[i];
            }
        }
        return true;
    }
};