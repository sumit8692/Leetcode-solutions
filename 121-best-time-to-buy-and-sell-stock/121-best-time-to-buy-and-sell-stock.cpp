class Solution {
public:
    int maxProfit(vector<int>& prices) {
//         int maxstock = 0;
//         for(int i = 0; i < prices.size()-1; i++)
//             for(int j = i+1; j < prices.size(); j++)
//                 if(prices[j] > prices[i])   maxstock = max(prices[j] - prices[i],maxstock);
            
//         return maxstock;
        // NIBBA Solution
        
        
        
        int minprice = INT_MAX;
        int maxprof = 0;
        for(int i = 0; i < prices.size(); i++){
            minprice = min(minprice, prices[i]);
            maxprof = max(maxprof, prices[i] - minprice);
        }
        return maxprof;
    }
};