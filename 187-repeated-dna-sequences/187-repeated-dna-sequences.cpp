class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        
        unordered_map<string, int> mp;
        vector<string> res;
        if(s.size() < 10)   return res;
        for(int i = 0; i < s.size() - 9; i++){
           string cur = s.substr(i, 10); // current pattern
            if(mp.find(cur) != mp.end() && mp[cur] == 1)
                res.push_back(cur);
            mp[cur]++; // add frequency everytime pattern is encountered
        }
        
        return res;
    }
};