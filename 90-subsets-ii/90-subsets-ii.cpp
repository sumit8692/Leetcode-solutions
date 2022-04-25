class Solution {
public:
    void findSub(int ind,vector<int> &nums, vector<int>& temp, vector<vector<int>>& res){
        res.push_back(temp);
        for(int i = ind;i<nums.size();i++){
            if(i!=ind && nums[i-1]==nums[i]) continue;
            temp.push_back(nums[i]);
            findSub(i+1,nums,temp,res);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        findSub(0,nums,temp,res);
        return res;
    }
};