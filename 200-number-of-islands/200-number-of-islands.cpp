class Solution {
private:
    void check(vector<vector<char>> &grid,int i,int j){
        if(i == grid.size() || j == grid[0].size() || i < 0 || j < 0 || grid[i][j] == '0') 
            return;
        
        grid[i][j] = '0';
        
        check(grid,i+1,j);
        check(grid,i,j+1);
        check(grid,i-1,j);
        check(grid,i,j-1);
        
    }
        
public:
    int numIslands(vector<vector<char>>& grid) {
        int island = 0;
        
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j  < grid[0].size(); j++){
                if(grid[i][j] == '1'){
                    island++;
                    check(grid, i, j);
                }
            }
        }
        
        return island;
        
    }
};