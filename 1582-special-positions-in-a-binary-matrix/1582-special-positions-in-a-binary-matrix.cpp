class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        
        int row = mat.size();
        int col = mat[0].size();
        
        int r[row];
        int c[col];
        
        for(int i = 0; i < row*col; i++)
            r[i/col] = 0,   c[i%col] = 0;
        
        for(int i = 0; i < row*col; i++)
            if(mat[i/col][i%col] == 1)
                r[i/col]++, c[i%col]++;

        int count = 0;
        
        for(int i = 0; i < row*col; i++)
            if(mat[i/col][i%col] == 1 && r[i/col] == 1 && c[i%col] == 1)
                count++;
        
        return count;   
        
    }
};