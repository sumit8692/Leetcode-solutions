class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1, s2;
        vector<int> res;
        for(int num: nums1) s1.insert(num); 
        for(int num: nums2) s2.insert(num);
        
        for(int val: s1)
            if(s2.find(val) !=s2.end())  res.push_back(val);
        
        return res;
    }
};