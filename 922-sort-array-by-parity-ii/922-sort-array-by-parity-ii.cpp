class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        
        for(int i = 0, j = 1; i < nums.size();){
            if(nums[i]%2==0)   i+=2; //for even index we are checking whether the number is even or not 
            else if(nums[j]%2!=0)   j+=2; //here we are checking for odd index
            else swap(nums[i],nums[j]);// swap if both condition doesn't match
        }
        return nums;
    }
};