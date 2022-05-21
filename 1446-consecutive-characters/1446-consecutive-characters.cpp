class Solution {
public:
    int maxPower(string s) {
        int maxi = 1;
        int cnt = 1;
        for(int i = 0; i  < s.length(); i++){
            s[i] == s[i+1]?cnt++:cnt=1;
            maxi = max(maxi, cnt);
        }
        return maxi;
    }
};
