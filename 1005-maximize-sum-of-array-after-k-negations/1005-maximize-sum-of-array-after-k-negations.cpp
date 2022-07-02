class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size(); i++)
            if(nums[i] < 0 && k > 0){nums[i] = (-1)*nums[i];k--;}
        
        int sum = 0;
        
        for(auto x: nums)   sum += x;
        
        int x = *min_element(nums.begin(), nums.end());
        
        if(k%2) sum -= 2*x;
        
        return sum;
    }
};