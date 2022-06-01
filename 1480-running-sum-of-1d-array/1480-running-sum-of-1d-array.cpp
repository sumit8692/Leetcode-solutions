class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
    for(int n = 1; n < nums.size(); n++)    nums[n] += nums[n-1];
    return nums;
    }
};