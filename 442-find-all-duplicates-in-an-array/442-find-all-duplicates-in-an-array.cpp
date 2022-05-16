class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        
//         vector<int> ans;
        
//         for(int i = 0; i < nums.size(); i++){
            
//             int pos = abs(nums[i])-1;
//             if(nums[pos]<0)     ans.push_back(pos+1);
//             nums[pos] = -1*nums[pos];
//         }
//         return ans;
        
        vector<int> ans;
        unordered_map<int,int> m;
        for(int i = 0; i < nums.size(); i++)
            m[nums[i]]++;
        
        for(int i = 0; i < nums.size(); i++){
            if(m[nums[i]]==2){
                ans.push_back(nums[i]);
            m[nums[i]]=0;
            }
        }
        return ans;
    }
};