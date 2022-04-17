class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int lo = 1;
        int hi = *max_element(nums.begin(),nums.end());
        int ans = 0;
        while(lo<=hi){
            int mid = (lo+hi)/2;
            int caldivi = chethre(nums,mid);
            if(caldivi <= threshold){
                ans = mid;
                hi = mid - 1;
            }
            else lo = mid + 1;
        }
        
        return ans;
    }
    
    int chethre(vector<int> &nums, int mid){
        int sum = 0;
        
        for(int i = 0; i < nums.size(); i++)    sum+= (nums[i]/mid) + ((nums[i]%mid!=0));
        
        return sum;
        
    }
};