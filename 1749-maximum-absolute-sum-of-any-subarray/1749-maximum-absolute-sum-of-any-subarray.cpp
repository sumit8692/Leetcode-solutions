class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int max1 = 0;
        int sum = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            if(sum < 0) sum = 0;
            max1 = max(sum,max1);
        }
        sum = 0;
        int max2 = 0;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];
            if(sum >= 0)    sum = 0;
            max2 = min(sum,max2);
        }
        return max(max1,abs(max2));
    }
};