class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int left = *max_element(weights.begin(), weights.end());
        int right = accumulate(weights.begin(), weights.end(), 0);
        while (left <= right){
            int mid = left + (right - left)/2;
            int daysNeeded = 1;
            int currentWeight = 0;
            for (int i = 0; i < weights.size(); i++){
                if (currentWeight + weights[i] > mid){
                    daysNeeded++;
                    currentWeight = weights[i];
                }
                else {
                    currentWeight += weights[i];
                }
            }
            if (daysNeeded <= days){
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }
        return left;
    }
};