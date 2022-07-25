class Solution {
public:
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& Q) {
        
        int N = s.size(), count = 0, total = 0;
        vector<int> leftBound(N,0);
        vector<int> rightBound(N,0);
        
        for(int i = 0; i < N; i++){
            
            if(s[i] == '|') count = total;
            else if(s[i] == '*')    total++;
            rightBound[i] = count;
            
        }
        
        count = 0;
        total = 0;
        for(int i = N - 1; i >= 0; i--){
            if(s[i] == '|') count = total;
            else if(s[i] == '*')    total++;
            leftBound[i] = count;
            
        }
        
        vector<int> ans;
        for(int q = 0; q < Q.size(); q++){
            int L = Q[q][0];
            int R = Q[q][1];
            
            count = leftBound[L] + rightBound[R] - total;
            if(count < 0)   count = 0;
            ans.push_back(count);
            
        }
        return ans;
    }
};