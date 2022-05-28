class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int size = nums.size();
        sort(nums.begin(), nums.end());
        int ans = size;
        
        for(int i = 0; i < size; i++){
            if(nums[i]!=i){  ans = i;
            break;}
        }
        
        return ans;
        
    }
};
	int missingNumber(vector<int>& nums) {
        
        int n = nums.size();
        sort(nums.begin(), nums.end());
        
        int ans = n;
        
        for(int i = 0 ; i < n ; i++){
            
            if(nums[i] != i){
                ans = i;
                break;
            }
            
        }
        
        return ans;
        
    }