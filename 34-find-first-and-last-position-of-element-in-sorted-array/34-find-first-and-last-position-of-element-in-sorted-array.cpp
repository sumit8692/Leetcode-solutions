class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result;
        int start = 0; 
        int end = nums.size() - 1;
        int ans = -1;
        
        // binary search to find first index of target element
        
        while(start <= end){
            
            int mid = start + (end - start)/2;
            
            if(nums[mid] == target){
                ans = mid;
                end = mid - 1;
            }
            
            else if(nums[mid] > target)     end = mid - 1;
            
            else start = mid + 1;
        }
        
        result.push_back(ans);
        start = 0;
        end = nums.size() - 1;
        ans = -1;
        
        while(start<=end){
            int mid = start + (end - start)/2;
            if(nums[mid] == target){
                ans = mid;
                start = mid + 1;
            }
            
            else if(nums[mid] > target)     end = mid - 1;
            
            else start = mid + 1;
        }
        
        result.push_back(ans);

        return result;
        
    }
};