class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n == 0 || n == 1)    return n;
        int nums[n+1];
        nums[0] = 0;
        nums[1] = 1;
        int maxi = 1;
        for(int i = 2; i <= n; i++){
            nums[i] = i%2 == 0? nums[i/2]: nums[i/2]+nums[i/2+1];
            maxi = max(maxi,nums[i]);
        }
        return maxi;
    }
};