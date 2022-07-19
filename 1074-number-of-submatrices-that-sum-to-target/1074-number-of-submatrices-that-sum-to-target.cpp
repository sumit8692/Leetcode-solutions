class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& A, int target) {
        int res = 0, m = size(A), n = size(A[0]);
        
        for(int row = 0; row < m; row++)
            for(int col = 1; col < n; col++)
                A[row][col] += A[row][col-1];
        
        unordered_map<int, int> mp;
        for(int colstart = 0; colstart < n; colstart++){
            for(int colend = colstart; colend < n; colend++){
                int cursum = 0;
                mp ={{0,1}};
                for(int row = 0; row < m; row++){
                    cursum += A[row][colend] - (colstart? A[row][colstart-1]:0);
                    res += mp[cursum - target];
                    mp[cursum]++;
                }
            }
        }
    return res;
    }
};