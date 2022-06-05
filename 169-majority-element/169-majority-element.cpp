// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         // unordered_map<int, int> counter;
//         // for (int num : nums) {
//         //     if (++counter[num] > nums.size() / 2) {
//         //         return num;
//         //     }
//         // }
//         // return 0;
        
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int counter = 0, majority;
        for (int num : nums) {
            if (!counter) {
                majority = num;
            }
            counter += num == majority ? 1 : -1;
        }
        return majority;
    }
};
//     }
// };