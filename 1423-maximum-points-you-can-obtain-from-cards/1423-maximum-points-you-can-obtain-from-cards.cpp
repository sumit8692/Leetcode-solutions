class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        
        int tot = 0;
        for(int i = 0; i < k; i++)  tot += cardPoints[i];
        
        int best = tot;
        for(int i = k -1, j = cardPoints.size()-1; ~i; i--,j--) tot = tot + cardPoints[j] - cardPoints[i], best = max(best,tot);
        
        return best;
        
        
    }
};