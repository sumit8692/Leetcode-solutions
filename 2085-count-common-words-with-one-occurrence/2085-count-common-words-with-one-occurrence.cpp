class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int> fr1, fr2;
        int cnt = 0;
        for(auto val: words1)   fr1[val]++;
        for(auto val: words2)   fr2[val]++;
        
       for (auto& [s, v] : fr1)
            if(v == 1 &&  fr2[s] == 1)  cnt++;
            
        return cnt;
        
    }
};