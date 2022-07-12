class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& in) {
        
        sort(in.begin(), in.end());
        
        int count = 0, l = 0, r = 1, n = in.size();
        
        while(r<n){
            if(in[l][1] <= in[r][0]){
                l = r;
                r++;
            }
            else if(in[l][1] <= in[r][1]){
                count++;
                r++;
            }
            else if(in[l][1] > in[r][1]){
                count++;
                l = r;
                r++;
            }
        }
        return count; 
    }
};