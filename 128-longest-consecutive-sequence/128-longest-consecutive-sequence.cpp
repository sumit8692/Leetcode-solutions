class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> s(nums.begin(), nums.end());
        int leng = 0;
        for(int i = 0; i < nums.size(); i++){
                if(s.find(nums[i] - 1) != s.end())    continue;
                else{
                    
                    int count = 0;
                    int curr_ele = nums[i];
                    while(s.find(curr_ele) != s.end()){
                        count++;
                        curr_ele++;
                    }
                    leng = max(leng, count);
                }
        
        }
       return leng;
    }
};