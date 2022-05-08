class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int,int> m;
        vector<int> ans;
        
        for(int i = 0; i < nums1.size(); i++)
            m[nums1[i]]++;
        
        for(int i = 0; i < nums2.size(); i++){
            auto it = m.find(nums2[i]);
            if(it != m.end() && it->second > 0){
                it->second--;
                ans.push_back(it->first);
            }
            
        }
        return ans;
    }
};