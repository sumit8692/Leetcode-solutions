class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int n = nums.size(), up = 1, down = 1;
        
        for(int i = 1; i < n; i++)
            if(nums[i] < nums[i-1]) up = 1 + down;
            else if(nums[i-1] < nums[i])    down = up + 1;
            
        
        return max(up,down);
    }
};