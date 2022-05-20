class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> sum(accounts.size(),0);
        for(int i = 0; i < accounts.size(); i++)
            for(int j = 0; j < accounts[0].size(); j++)
                sum[i] += accounts[i][j];
        
        int maxi = sum[0];
        
        for(int i = 0; i < sum.size();i++)  maxi = max(maxi, sum[i]);
        
        return maxi;
        
    }
};