class Solution {

public:
        void backtrack(int index, int n, vector<int> &arr, vector<int> &ans, vector<vector<int>> &res){
            if(index == n){
                res.push_back(ans);
                return;
            }
            ans.push_back(arr[index]);
            backtrack(index+1, n, arr, ans, res);
            ans.pop_back();
            backtrack(index+1, n, arr, ans, res);
        }
public:
    vector<vector<int>> subsets(vector<int>& nums){
        // vector<vector<int>> ans;
        // int n = nums.size();
        // long long total = 1<<n; //2^n combination
        // for(long long k = 0; k < total; k++){
        //     vector<int> subset;
        //     for(int i = 0; i<n; i++){
        //         if(k&(1<<i))
        //             subset.push_back(nums[i]);
        //     }
        //     ans.push_back(subset);
        // }
        // return ans;
        vector<vector<int>> res;
        vector<int> ans;
        int n = nums.size();
        if(nums.empty())    return {};
        backtrack(0,n,nums,ans,res);
        return res;
    }
};