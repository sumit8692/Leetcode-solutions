class Solution {
public:
    int dp[1001];
    int help(int i, vector<int> &co){
        
        if(i >= co.size())  return 0;
        if(dp[i]!=-1)   return dp[i];
        int op1 = help(i+1, co);
        int op2 = help(i+2, co);
        return dp[i] = min(op1, op2) + co[i];
        
        
    }
    int minCostClimbingStairs(vector<int>& cost){
        memset(dp, -1, sizeof(dp));
        return min(help(0, cost),help(1, cost));
    }
};