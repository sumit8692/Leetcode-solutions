class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max = INT_MIN;
        int store_ind = -1;
        for(int i = 0; i < nums.size(); i++)    if(nums[i] > max){ max = nums[i];   store_ind = i;}
        
        for(int i = 0; i < nums.size(); i++)
            if(i!=store_ind)    if(2*nums[i] > max) return -1;
        
        return store_ind;
    }
};