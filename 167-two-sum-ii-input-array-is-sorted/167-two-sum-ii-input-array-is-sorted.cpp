class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        
        int start = 0;
        int end = numbers.size() - 1;
        
        while(start < end){
            int sum = numbers[start] + numbers[end];
            if(sum > target)    end--;
            else if(sum < target)   start++;
            else{
                res.push_back(start+1);
                res.push_back(end+1);
                break;
            }
        }
        return res;
    }
};