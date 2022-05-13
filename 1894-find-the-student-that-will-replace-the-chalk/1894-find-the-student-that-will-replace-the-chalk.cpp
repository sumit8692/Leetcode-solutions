class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        k = k % accumulate(cbegin(chalk), cend(chalk), 0LL);
        for (int i = 0; i < size(chalk); k -= chalk[i++]) {
            if (k < chalk[i]) {
                return i;
            }
        }
        return -1;
    }
};