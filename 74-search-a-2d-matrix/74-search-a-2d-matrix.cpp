class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       
        
//         for(int i = 0; i < r_s*c_s; i++)
//             if(matrix[i/c_s][i%c_s] == target)  return true;
        
//         return false;
         // int r_s =matrix.size();
         // int col = matrix[0].size();
       //  while(row < r_s && col >= 0){
       //      if(target<matrix[row][col]) col--;
       //      else if(target>matrix[row][col])   row++;
       //      else    return true;
       //  }        
       // return false;
        
//          for(int i=0;i<n;i++)
//             {   
//                 if(matrix[i][j]==target)
//                     flag=1;
//                 while(matrix[i][j]>target && j>0){
//                     j--;  
//                     if(matrix[i][j]==target)
//                     flag=1;
//                 }   
                
//                 if(flag)
//                     break;
                
//             } Amit kewot
        
         int r_s =matrix.size();
         int col = matrix[0].size();
         int low = 0;
         int hi = r_s*col-1;
         while(low<=hi){
             int mid = low + (hi - low)/2;
             if(matrix[mid/col][mid%col] > target) hi = mid - 1;
             else if(matrix[mid/col][mid%col] < target) low = mid + 1;
             else return true;
         }
        return false;
    }
};