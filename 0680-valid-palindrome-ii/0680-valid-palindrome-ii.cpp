class Solution {
public:
    bool isvalidPalindrome(string s, int left, int right){
        while (left < right){
            if (s[left] != s[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;
        while (i < j){
            if (s[i] == s[j]){
                i++;
                j--;
            }
            else {
                return isvalidPalindrome(s, i + 1, j) || isvalidPalindrome(s, i, j - 1);
            }
        }
        return true;
    }
};