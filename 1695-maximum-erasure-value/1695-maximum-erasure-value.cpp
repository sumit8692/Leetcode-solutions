class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int ans = 0;
        int sum = 0;
        int l = 0, r = 0;
        int end = nums.size();
        unordered_set<int> s;
        while(r < end){
            sum += nums[r];
            while(s.find(nums[r])!=s.end())
                sum-=nums[l], s.erase(nums[l++]);
            s.insert(nums[r++]);
            ans = max(ans, sum);
        }
        return ans;
    }
};