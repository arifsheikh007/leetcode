class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        stack<char> sr;

        for (char ch : s){
            if (ch == '#'){
                if (!st.empty()){
                    st.pop();
                }
            }
            else{
                st.push(ch);
            }
        }

        for (char ch : t){
            if (ch == '#'){
                if (!sr.empty()){
                    sr.pop();
                }
            }
            else{
                sr.push(ch);
            }
        }

        if (st.size() != sr.size()){
            return false;
        }
        while (!st.empty()){
            if (st.top() != sr.top()){
                return false;
            }
            else {
                st.pop();
                sr.pop();
            }
        }
        return true;
    }
};