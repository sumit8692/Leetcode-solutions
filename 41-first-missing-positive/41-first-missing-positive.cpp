class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int req = 1;
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == req)   req++;
        }
        return req;
    }
};