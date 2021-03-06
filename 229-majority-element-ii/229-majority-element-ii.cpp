class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        vector<int> result;
        
        int count1=0, count2=0;
        int result1=INT_MIN, result2=INT_MIN;
        
        for(int num:nums){
            if(num==result1) count1++;
            else if(num==result2) count2++;
            else if(count1==0) { result1=num; count1=1; }
            else if(count2==0) { result2=num; count2=1; }
            else { count1--; count2--; }
        }
        
        count1=count2=0;
        for(int num:nums){
            if(num==result1) count1++;
            else if(num==result2)  count2++;
        }
        
        
        if(count1>n/3) result.push_back(result1);
        if(count2>n/3) result.push_back(result2);
        
        return result;
    }
};