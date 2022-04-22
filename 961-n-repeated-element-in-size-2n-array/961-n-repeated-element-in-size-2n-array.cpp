class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int> mp;
        
        for(auto i: nums)   mp[i]++;
        int n = nums.size();
        int res;
        
        for(auto i:mp){
            if(i.second == n/2){
                res = i.first;
            }
        }
        return res;
    }
};