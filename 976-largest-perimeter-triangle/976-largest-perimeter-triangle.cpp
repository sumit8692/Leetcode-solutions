class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        //here we just need to check that sum of two sides of a triangle is greater than the third side
        
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            if(nums[i]<nums[i+1]+nums[i+2]){
                return nums[i]+nums[i+1]+nums[i+2];
            }
        }
        return 0;
        
    }
};