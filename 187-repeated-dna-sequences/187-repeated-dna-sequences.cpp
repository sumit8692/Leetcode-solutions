class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string, int> map; // pattern, frequency
        vector<string> res;
        if(s.size() < 10) return res; // return if size is less than 10
        
        for(int i = 0; i < s.size() - 9; i++){ 
            string cur = s.substr(i, 10); // current pattern
            if(map.find(cur) != map.end() && map[cur] == 1){ // pattern exists and has been seen once
                res.push_back(cur);
            }
            map[cur]++; // add frequency everytime pattern is encountered
        }
        
        return res;
    }
};