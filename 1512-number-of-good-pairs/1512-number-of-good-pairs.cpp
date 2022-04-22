class Solution 
{
public:
    int numIdenticalPairs(vector<int>& nums) 
    {
        int good_pairs = 0;
        
        unordered_map<int,int> map;   // num => frequency
        for(auto num : nums)
            map[num]++;
        
        for(auto& [num, freq] : map)
            good_pairs += (freq*(freq-1)) / 2;
    
        return good_pairs;
    }
};