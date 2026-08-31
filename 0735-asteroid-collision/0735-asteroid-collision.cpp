class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for (int i = 0; i < asteroids.size(); i++){
            int current = asteroids[i];
            while (!st.empty() && st.top() > 0 && current < 0){
                if (abs(st.top()) < abs(current)){
                    st.pop();
                }
                else if (abs(st.top()) > abs(current)){
                    current = 0;
                }
                else {
                    st.pop();
                    current = 0;
                }
            }
            if (current != 0){
                st.push(current);
            }
        }
        vector<int> ans;
        while (!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse (ans.begin(), ans.end());
        return ans;
    }
};