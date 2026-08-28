class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int maxArea = 0;
        stack<int> st;
        for (int i = 0; i < heights.size(); i++){
            while (!st.empty() && heights[i] < heights[st.top()]){
                int heightIndex = st.top();
                st.pop();
                int left;
                if (st.empty()){
                    left = -1;
                }
                else {
                    left = st.top();
                }
                int width = i - left - 1;
                int area = heights[heightIndex] * width;
                maxArea = max(maxArea, area);
            }
            st.push(i);
        }
        while (!st.empty()){
            int heightIndex = st.top();
            st.pop();
            int left;
            if (st.empty()){
                left = -1;
            }
            else {
                left = st.top();
            }
            int width = heights.size() - left - 1;
            int area = heights[heightIndex] * width;
            maxArea = max(maxArea, area);
        }
        return maxArea;
    }
};