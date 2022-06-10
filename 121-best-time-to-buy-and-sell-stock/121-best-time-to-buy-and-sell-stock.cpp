class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        //int st = 0;
        int ans;
        int maxprofit = 0;
        int minprice = INT_MAX;
        for(int i = 0; i < prices.size(); i++){
            ans = min(prices[i],ans);
            maxprofit = max(maxprofit, prices[i]-ans);
        }
        return maxprofit;
    }
};