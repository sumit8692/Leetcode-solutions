class Solution {
private:
        int dfs(vector<vector<int>> &grid, int i, int j){
            
            if(i < 0 || j < 0 || i == grid.size() || j == grid[0].size()  || grid[i][j] == 0)   return 0;
            
            grid[i][j] = 0;
            
            return (1 + dfs(grid,i+1,j) + dfs(grid,i-1,j) + dfs(grid,i,j+1) + dfs(grid,i,j-1));
        }
    
public:
        int maxAreaOfIsland(vector<vector<int>>& grid) {
            
            if(grid.size() == 0)    return 0;
            
            int m = grid.size();
            int n = grid[0].size();
            int maxi = 0;
            
            for(int i = 0; i < m; i++){
                for(int j = 0; j < n; j++){
                    if(grid[i][j] == 1){
                        maxi = max(maxi, dfs(grid,i,j));
                    }
                }
            }
            return maxi;
    }
};