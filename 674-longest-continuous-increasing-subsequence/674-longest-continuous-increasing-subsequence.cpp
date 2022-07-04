class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int res = 0;
        int len = 1;
        if(nums.size() == 1)    return 1;
        
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] > nums[i-1]) len++;
            else len = 1;
            res = max(res,len);
        } 
        return res;
    }
};