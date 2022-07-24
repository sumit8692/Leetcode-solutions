class Solution {
public:
     bool searchMatrix(vector<vector<int>>& matrix, int target) {

              int r_s =matrix.size();
              int col = matrix[0].size()-1;
              int row = 0;
         
              while(row < r_s && col >= 0){
                  
                if(target<matrix[row][col]) col--;
                else if(target>matrix[row][col])   row++;
                else if(target==matrix[row][col])   return true;
                  
              }        
              return false;
    }
};