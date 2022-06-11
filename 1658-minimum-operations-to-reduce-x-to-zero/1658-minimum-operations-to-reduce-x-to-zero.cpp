class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        
        int tsum = accumulate(nums.begin(), nums.end(), 0);
        int sum_to_make = tsum - x;
        int st = 0, end = 0;
        int ans = 0;
        int sum = 0;
        if(tsum == x)    return nums.size();
        while(end < nums.size()){
            sum+=nums[end];
           
            while(sum > sum_to_make && st < end)
                sum-=nums[st++];
            if(sum == sum_to_make)      ans = max(ans, end-st+1);
            end++;
        }

        return ans == 0? -1: nums.size()-ans;
        
    }
};