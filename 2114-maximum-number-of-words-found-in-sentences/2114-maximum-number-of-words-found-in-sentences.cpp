class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWords = 0;
        for (int i = 0; i < sentences.size(); i++){
            int word = 1;
            for (char ch : sentences[i]){
                if (ch == ' '){
                    word++;
                }
            }
            if (word > maxWords){
                maxWords = word;
            }
        }
        return maxWords;
    }
};