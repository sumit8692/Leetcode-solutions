class Solution {
public:
    int maxProduct(vector<int>& a) {
        int maxValue= a[0], minValue = a[0];
        int res = maxValue;
        
        for(int i=1; i<a.size(); i++){
            int temp = maxValue;
            maxValue = max(temp * a[i], max(minValue * a[i], a[i]));
            minValue = min(minValue * a[i], min(temp * a[i], a[i]));
            
            res = max(res, maxValue);
        }
        return res;
    }
};