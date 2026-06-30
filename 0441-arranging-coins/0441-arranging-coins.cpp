class Solution {
public:
    int arrangeCoins(int n) {
        long long start = 0, end = n;
        
        while (start <= end) {
            long long mid = start + (end - start) / 2;
            long long coinsNeeded = mid * (mid + 1) / 2;
            
            if (coinsNeeded == n) {
                return mid;
            } else if (coinsNeeded < n) {
            start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return end;
    }
};