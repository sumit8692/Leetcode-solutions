class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int> s;
        int n = candyType.size()/2;
        for(auto i : candyType) s.insert(i);
        int m = s.size();
        return min(n,m);
    }
};