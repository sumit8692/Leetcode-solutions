class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        //here we just need to check that sum of two sides of a triangle is greater than the third side
        int sum = 0;
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            sum = nums[i]+nums[i+1]+nums[i+2];
            if(nums[i]<sum-nums[i]){
                return sum;
            }
        }
        return 0;
        
    }
};