class Solution {
public:
    int minPartitions(string n) {
        int ans = 0;
        for(auto &a: n) ans = max(a-'0', ans);
        
        return ans;
    }
};