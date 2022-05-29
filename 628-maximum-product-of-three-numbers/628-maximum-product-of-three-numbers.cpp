class Solution {
public:

int maximumProduct(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int a=0,b=0,c=0,n=nums.size()-1;
    a=nums[n]*nums[n-1]*nums[n-2];
    b=nums[0]*nums[1]*nums[n];
    c=nums[0]*nums[1]*nums[2];
    int x=max(a,b);
    int ans=max(x,c);
    return ans;
}
};