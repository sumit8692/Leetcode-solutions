class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
            // int pivotIndex(vector<int>& nums) {
    // int n = nums.size();
    // int ltmax[n];
    // int rtmax[n];
    // int ans = -1;
    // ltmax[0] = nums[0];
    // rtmax[n-1] = nums[n-1];
    // for(int i = 1; i < n; i++){
    //         int j = n-i-1;
    //         ltmax[i] = ltmax[i-1] + nums[i];
    //         rtmax[j] = rtmax[j+1] + nums[j];
    // }
    // for(int i = 0 ; i < n; ++i) {
    //     if (ltmax[i] == rtmax[i])
    //             return i;
    //     }
    // return -1;
    //Noob Approach
    int sum=0;
    int ltsum=0;
        
    for(int i = 0; i < nums.size(); i++)    
        sum+=nums[i];
        
    for(int i = 0; i<nums.size();i++){
        if(ltsum == sum - nums[i] - ltsum)  return i;
        ltsum=ltsum+nums[i];
        }
        
     return -1;
        
    }
};