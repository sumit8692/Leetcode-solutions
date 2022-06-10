class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int length = INT_MAX;
        int sum = 0;
        int start = 0;
        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];
                while(sum>=target){
                    length = min(i-start+1,length);
                    sum  -= nums[start++];
                }      
            
        }
        
        return length == INT_MAX?0:length;
        
    }
};