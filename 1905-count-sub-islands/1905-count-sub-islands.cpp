class Solution {
public:
    int dfs(vector<vector<int>> &B, vector<vector<int>> &a, int i, int j){
        
        int m = a.size(), n = a[0].size(), res = 1;
        
        if(i < 0 || i == m || j < 0 || j == n || a[i][j] == 0)  return 1;
        
        a[i][j] = 0;
        
        res &= dfs(B,a,i-1,j);
        res &= dfs(B,a,i+1,j);
        res &= dfs(B,a,i,j-1);
        res &= dfs(B,a,i,j+1);
        
        return res & B[i][j];
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        
        int m = grid2.size(), n = grid2[0].size(), res = 0;
        
        for(int i = 0; i < m; i++)
            for(int j = 0; j < n; j++)
                if(grid2[i][j] == 1)    res+=dfs(grid1,grid2,i,j);
                    
        return res;
    }
};