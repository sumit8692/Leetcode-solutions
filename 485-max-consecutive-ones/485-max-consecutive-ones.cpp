class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int p2 = 0;
        int cnt = 0;
        for(int i = 0; i < nums.size(); i++){
            
            if(nums[i] == 1) p2++;
            else{
                p2 = 0;
            }
        cnt = max(cnt,p2);            
        }
        return cnt;
    }
};