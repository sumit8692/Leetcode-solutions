class Solution {
public:
    bool isSubsequence(string s, string t) {
        int len = 0;
        
        for(auto x: t)
            if(x == s[len]) len++;
        
        if(len == s.size()) return true;
        return false;
    }
};