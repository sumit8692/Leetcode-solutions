class Solution {
public:
    bool isvalid(int i, int j, int n, int m, vector<vector<int>> &grid){
        if(i>=0 && j >= 0 && i < n && j < m && grid[i][j] == 1)     return true;
        return false;
    }
    
    int orangesRotting(vector<vector<int>>& grid){
        int  n = grid.size();
        int  m = grid[0].size();
        int time = 0;
        queue<pair<int,int>> q;
        int fresh = 0;
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 2)     q.push({i, j});
                if(grid[i][j] == 1)     fresh++;
            }
        }
        if(fresh==0)    return 0;
        
        while(!q.empty()){
            
            int size_q = q.size();
            int temp = 0;
          
            while(size_q != 0){
                pair<int, int> p = q.front();
                q.pop();
                
                int x1 = p.first;
                int y1 = p.second;
                int ax[4] = {1,-1,0,0};
                int ay[4] = {0,0,1,-1};
                
                for(int i = 0; i < 4; i++){
                    int x = x1 + ax[i];
                    int y = y1 + ay[i];
                    
                    if(isvalid(x,y,n,m,grid)){
                        temp++;
                        grid[x][y] = 2;
                        q.push({x,y});
               
                    }
                }
                size_q--;
                
            }
            
            if(temp != 0)   time++;
          
        }
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1){ time = 0; break;}
            }
        }
        
        return (time == 0)? -1: time;
        
    }
};