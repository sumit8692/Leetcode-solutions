class Solution {
public:
    vector<vector<int>> ans;
    
    void permu(vector<int> &nums, int ind){
         if(ind == nums.size()){
                 ans.push_back(nums);
                 return;
            }
        unordered_set<int> s;
            for(int i = ind; i < nums.size(); i++){
                if(s.find(nums[i])!=s.end())    continue;
                s.insert(nums[i]);
                swap(nums[ind],nums[i]);
                permu(nums, ind+1);
                swap(nums[ind],nums[i]);
    }
}
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        permu(nums,0);
        return ans;
    
    }
};