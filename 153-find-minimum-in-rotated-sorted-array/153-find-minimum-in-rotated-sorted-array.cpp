class Solution {
public:
    int findMin(vector<int>& nums) {
    //     int low = 0;
    //     int hi = nums.size()-1;
    //     while(low<=hi){
    //         int mid = low + (hi-low)/2;
    //         if(mid>0&&mid<nums.size()-1){
    //             if(nums[mid]<nums[mid+1]&&nums[mid]<nums[mid-1])   return nums[mid];
    //             else if(nums[nums.size()-1] < nums[mid]) low = mid+1;
    //             else hi = mid-1;
    //         }
    //         else if(mid == 0){
    //             if(nums[0] < nums[1])   return nums[0];
    //             return nums[1];
    //         }
    //         else if(mid == nums.size()-1){
    //             if(nums[nums.size()-1] < nums[nums.size()-2])   return nums[nums.size()-1];
    //             return nums[nums.size()-2];
    //         }
    //     }
    //     return -1;
        
//          int low = 0;
//          int n = nums.size()-1;
//          int high = n;
        
//         while(low<=high){
//             int mid = low + (high-low)/2;
//             if(nums[n]<=nums[mid])   low = mid + 1;
//             else if(nums[n]>=nums[mid])  high = mid - 1;   
//         }
//         return nums[low];        
        
        
        int low = 0; 
        int high = nums.size()-1;
        int n = nums.size()-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[n] < nums[mid])     low = mid+1;
            else high = mid-1;
        }
        return nums[low];
        
     }
};