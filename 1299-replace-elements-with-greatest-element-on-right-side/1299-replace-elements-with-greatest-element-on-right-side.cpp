class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n,-1);
        int maxfm_rt = -1;
        for(int i = n-1; i>=0; i--){
            ans[i] = maxfm_rt;
            maxfm_rt = max(maxfm_rt, arr[i]);
        }
        return ans;
    }
};