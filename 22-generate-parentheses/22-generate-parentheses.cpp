class Solution {
public:
    void solve(int start, int close, int n, string s, vector<string> &ans){
        if(size(s) == 2*n)  ans.push_back(move(s));
        if(start < n)   solve(start+1,close,n,s+'(',ans);
        if(close < start)   solve(start, close + 1, n, s + ')',ans);
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        solve(0,0,n,"",ans);
        return ans;
    }
};