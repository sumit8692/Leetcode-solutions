class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int trkzero = 0;
        int trkcur = 0;
        
        while(trkcur<nums.size()){
            if(nums[trkcur] != 0)   swap(nums[trkzero++],nums[trkcur]);
            trkcur++;
        }
        
    }
};