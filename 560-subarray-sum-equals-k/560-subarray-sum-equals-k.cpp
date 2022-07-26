class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // int count = 0;
        // for(int i = 0; i < nums.size(); i++){
        //     int cursum = 0;
        //     for(int j = i; j < nums.size(); j++){
        //         cursum+=nums[j];
        //         if(cursum == k)     count++;
        //     }
        // }
        // return count;
        // above one is brute force approach

        //optimal
        int n = nums.size();
        int ans = 0;
        int pre[n];
        pre[0] = nums[0];
        // Here the intutiion is sum[j] - k = sum[i-1] 
        for(int i = 1; i < n; i++)  pre[i] = pre[i-1] + nums[i];
        unordered_map<int,int> mp;
        
        for(int i = 0; i < n; i++){
            
            if(pre[i]==k)   ans++;
            if(mp.find(pre[i]-k) != mp.end())   ans += mp[pre[i]-k];
            
            mp[pre[i]]++;
        }
        return ans; 
    }
};