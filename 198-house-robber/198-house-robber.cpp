// class Solution {
// public:
//     int helper(int ind, vector<int> &nums, vector<int> &dp){
//         if(ind == 0)    return nums[ind];
//         if(ind < 0)     return 0;
//         if(dp[ind]!=-1) return dp[ind];
        
//         int pick = nums[ind] + helper(ind-2, nums, dp);
// 	    int notPick = 0 + helper(ind-1, nums, dp);
	
// 	    return dp[ind] = max(pick, notPick);
//     }
//     int rob(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> dp(n,-1);
//         return helper(n-1, nums, dp);
//     }
// };
class Solution {
public:
    int rob(vector<int>& nums) {
        int n= nums.size();
        if(n==1) return nums[0];
        nums[1]= max(nums[0], nums[1]);
        for(int i=2; i<n; i++){
            nums[i]=max(nums[i-1], nums[i]+nums[i-2]);
        }
        return nums[n-1];
    }
};
