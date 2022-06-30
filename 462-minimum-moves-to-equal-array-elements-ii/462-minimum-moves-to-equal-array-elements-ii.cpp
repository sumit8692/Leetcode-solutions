class Solution {
public:
    int minMoves2(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        
        int i = 0, j = nums.size()-1;
        int res = 0;
        
        while(i < j){
            res += abs(nums[i]-nums[j]);
            i++;
            j--;
        }
        return res;
    }
};