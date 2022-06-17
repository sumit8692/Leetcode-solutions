class Solution {
public:
    int search(vector<int>& nums, int target) {
//         int low = 0; 
//         int high = nums.size()-1;
//         int pivot = 0;
//         int n = nums.size();
//         while(low<=high){
//             int mid = low+(high-low)/2;
//             //int next = (mid+1)%n;
//             //int prev = (mid-1+n)%n;
//             if(mid>=0&&nums[mid]<=nums[mid-1] && nums[mid]<=nums[mid+1] && mid<=high)                    pivot = mid;
//             else if(nums[0]>nums[mid])    low = mid+1;
//             else if(nums[mid]>nums[0])   high = mid-1;
//         }
//         int ans = -1;
//         low = 0;
//         high = pivot-1;
//         while(low<=high){
//             int mid = low + (high - low)/2;
//             if(nums[mid] == target)   ans = target;
//             else if(nums[mid] > target) high = mid-1;
//             else if (nums[mid] < target) low = mid+1;
            
//         }
//         low = pivot;
//         high = nums.size()-1;
//         while(low<=high){
//             int mid = low + (high - low)/2;
//             if(nums[mid] == target)   ans = target;
//             else if(nums[mid] > target) high = mid-1;
//             else if (nums[mid] < target) low = mid+1;
//         }
//         return ans;
        
        int lo = 0;
        int hi = nums.size()-1;
        while(lo<=hi){
            int mid = hi+(lo-hi)/2;
            if(nums[mid] == target) return mid;
            if(nums[0] <= nums[mid]){ 
                if(nums[lo] <= target && nums[mid] >= target) hi=mid-1;
                else    lo=mid+1;
            }
            else if(nums[0] > nums[mid]){
                if(target >= nums[mid] && target <= nums[hi]) lo=mid+1;
                else hi=mid-1;
                    
            }
        }
        return -1;
    }
    
};