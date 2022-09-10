class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        //int st = 0;
        int ans = INT_MAX;
        int maxprofit = 0;
        
        for(int i = 0; i < prices.size(); i++){
            
            ans = min(prices[i],ans);
            maxprofit = max(maxprofit, prices[i]-ans);
            
        }
        return maxprofit;
    }
};