class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        /*   LIS:
        *    Create a tmp_arr to save sequence.
        *    If curr_elem in arr is greater than tmp_arr.back(), append curr_elem to tmp_arr.
        *    Else, replace elem in tmp_arr such that,
        *      curr_elem < tmp_elem and it should not break incerasing nature of tmp_arr.
        *      (Binary search for curr_elem in tmp_arr will give you the proper index)
        *    Finally return len of tmp_arr.
        */
        vector<int> tmp;
        tmp.push_back(nums[0]);
        
        for (int i = 1; i< nums.size(); i++)
        {
            if (tmp.back() < nums[i])
            {
                tmp.push_back(nums[i]);
            }
            else
            {
                int idx = lower_bound(tmp.begin(), tmp.end(), nums[i]) - tmp.begin();
                tmp[idx] = nums[i];
            }
        }
        return tmp.size(); 
    }
};