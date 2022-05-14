class Solution {
public:
    int isPossible(vector<int>&nums,int mid,int maxOperations)
    {
        int operations=0;
        
        for(int i=0;i<nums.size();i++)
        {
            operations+=(nums[i]/mid); //Operations Nedded to divide that element.
            if(nums[i]%mid==0){
                operations--;
        }
        
        }
        return operations<=maxOperations;
    }
    int minimumSize(vector<int>& nums, int maxOperations) {
        int l=1;
        int h=*max_element(nums.begin(),nums.end());
        int ans=0;
        while(l<=h)
        {
            int mid=l+(h-l)/2;
            
            if(isPossible(nums,mid,maxOperations))
            {
                ans=mid;
                h=mid-1;
            }
            else{
                
            
                l=mid+1;
            }
        }
        return ans;
    }
};