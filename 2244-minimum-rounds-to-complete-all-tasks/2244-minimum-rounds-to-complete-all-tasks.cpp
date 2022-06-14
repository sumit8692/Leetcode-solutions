class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int, int> mp;
        int res = 0;
        for(auto a: tasks)  mp[a]++;
        
        for(auto &a: mp){    
            if(a.second == 1)  return -1;
            
            res+=(a.second+2)/3;
        }
        return res;
    }
};