class Solution{
public:
    int findKthLargest(vector<int>& nums, int k) {
        // int ans = 0;
        // for(int i = 0; i < nums.size()-1; i++){
        //     for(int j = 0; j < nums.size()-i-1; j++){
        //         if(nums[j] > nums[j+1]) swap(nums[j],nums[j+1]);
        //         if(nums[nums.size()-i-1] == k)  break;
        //     }
        // }
        // return nums[nums.size()-k];// This is using bubble sort
        
        //now we will do using heap.
        
        //randomized quick select
        
        priority_queue<int> pq(nums.begin(), nums.end());
        for(int i = 1; i < k; i++)      pq.pop();
        
        return pq.top();
       
        
    }
};