class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int r1 = 0, r2 = n - 1;
        int c1 = 0, c2 = n - 1;
        int val = 1;
        vector<vector<int>> ans(n,vector<int>(n));
        while(r1<=r2 && c1<=c2){
            for(int i = c1; i <= c2; i++)   ans[r1][i] = val++;
            r1++;
            for(int i = r1; i <= r2; i++)   ans[i][c2] = val++;
            c2--;
            for(int i = c2; i >= c1; i--)   ans[r2][i] = val++;
            r2--;
            for(int i = r2; i >= r1; i--)   ans[i][c1] = val++;
            c1++;
        }
        return ans;
    }
};