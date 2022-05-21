class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int p = 0;
        int cnt = 0;
        for(int i = 0; i < nums.size(); i++){
            
            if(nums[i] == 1) p++;
            else    p = 0;
            cnt = max(cnt,p);
            
        }
        return cnt;
    }
};