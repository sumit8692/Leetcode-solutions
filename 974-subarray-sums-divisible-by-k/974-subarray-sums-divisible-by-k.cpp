class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        
        vector<int> count(k);
        int prefix = 0, res = 0;
        count[0] = 1;
        for(int a: nums){
            prefix = (prefix + a % k + k) % k;
            res += count[prefix]++;
        }
        return res;
        
    }
};