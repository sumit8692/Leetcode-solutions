class Solution {
public:
    int mySqrt(int x) {
        int lo = 1;
        int hi = INT_MAX;
        int ans = 0;
        while(lo<=hi){
            long long mid = hi + (lo - hi)/2;
            if(mid*mid <= x) {
                ans = mid;
                lo = mid + 1;
            }
            
            else hi = mid - 1;
            
        }
        return ans;
    }
};