class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.length() - 1;
        int j = num2.length() - 1;
        int carry = 0;
        string ans = "";
        while (i >= 0 || j >= 0){
            int digit1 = (i >= 0) ? num1[i] - '0': 0;
            i--;
            int digit2 = (j >= 0) ? num2[j] - '0' : 0;
            j--;
            int sum = digit1 + digit2 + carry;
            carry = sum/10;
            int digit = sum % 10;
            ans += digit + '0';
        }
        if (carry){
            ans += carry + '0';
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};