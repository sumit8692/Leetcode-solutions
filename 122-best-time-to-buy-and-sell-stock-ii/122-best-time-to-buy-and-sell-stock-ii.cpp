class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        
        for(int i=1; i < prices.size(); i++) 
            maxProfit += max(prices[i] - prices[i-1], 0); // Simple logic: we are looking for extreme part of function
   
        return maxProfit;
    }
};