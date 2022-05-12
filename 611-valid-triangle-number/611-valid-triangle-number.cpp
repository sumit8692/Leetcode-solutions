class Solution {
public:
    int triangleNumber(vector<int>& nums) {
//         int n = nums.size();
//         int count = 0;
        
//         sort(nums.begin(),nums.end());
        
//         for(int i = n-1;i >=2; i--){
//             int j=0, k=i-1;
//             while(j<k)
//             {
//                 if(nums[j]+nums[k]>nums[i])
//                 {
//                     count+=k-j;
//                     k--;
//                 }
//                 else
//                     j++;
//             }
//         }
//         return count;
        
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        int ans = 0;
        for(int i = n - 1; i >= 0; --i){
            int first = nums[i];
            int leftTarget = first;
            
            int left = 0, right = i - 1;
            while(left < right){
                int sum = nums[left] + nums[right];
                if(sum > leftTarget){
                    ans += right - left;
                    --right;
                } else if(sum <= leftTarget){
                    ++left;
                }
            }
        }
        
        return ans;
        
    }
};