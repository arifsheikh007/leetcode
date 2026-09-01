class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        stringstream ss(path);
        string part;
        while (getline(ss, part, '/')){
            if (part == ".."){
                if (!st.empty()){
                    st.pop();
                }
            }
            else if (part == "." || part == ""){

            }
            else {
                st.push(part);
            }
        }
        string ans = "";
        while (!st.empty()){
            ans = "/" + st.top() + ans;
            st.pop();
        }
        if (ans.empty()){
            return "/";
        }
        return ans;
    }
};