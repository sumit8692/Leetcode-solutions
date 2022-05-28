class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
         int size = nums.size();
//         sort(nums.begin(), nums.end());
//         int ans = size;
        
//         for(int i = 0; i < size; i++){
//             if(nums[i]!=i){  ans = i;
//             break;}
//         }
        
//         return ans;
        // O(n*Log(n))  
        
        // int sum =  size*(size+1)/2;
        
        // for(int i = 0; i < size; i++)
        //     sum -= nums[i];
        // return sum;
        int ans = size;
        int mask = 0;
        for(int i = 0; i < size; i++){
            mask ^= i;
            ans ^= nums[i];
        }
        ans = mask^ans;
        return ans;
    }
};
