class Solution {
public:
    bool detectCapitalUse(string word) {
        int capital = 0;
        for (int i = 0; i < word.length(); i++){
            if (word[i] >= 'A' && word[i] <= 'Z'){
                capital++;
            }
        }
        if (capital == word.length()){
            return true;
        }
        else if (capital == 0){
            return true;
        }
        else if (capital == 1 && word[0] >= 'A' && word[0] <= 'Z'){
            return true;
        }
        return false;
    }
};