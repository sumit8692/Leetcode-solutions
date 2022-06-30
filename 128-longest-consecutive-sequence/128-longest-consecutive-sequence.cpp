class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        set<int> s;
        int ans = 0;
        
        for(int x: nums)    s.insert(x);
        
        for(int i = 0; i < nums.size(); i++){
            int curr_elem = nums[i];
            int prev_elem = curr_elem - 1;
            int count = 0;
            if(s.find(prev_elem) == s.end()){
                while(s.find(curr_elem) != s.end()){
                    curr_elem++;
                    count++;
                }
            }
            ans = max(ans,count);
        }
        return ans;
    }
};