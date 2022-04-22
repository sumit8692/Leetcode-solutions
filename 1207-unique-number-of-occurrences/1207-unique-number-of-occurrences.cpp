class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        set<int> s;
        map<int, int> mp;
        
        for(auto i: arr)    mp[i]++;
        
        for(auto& i:mp)  s.insert(i.second);
        
        if(s.size()==mp.size())  return true;
        else    return false; 
        
    }
};