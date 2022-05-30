// class Solution {
// public:
//     // char findTheDifference(string s, string t) {
//     //     int n = s.length();
//     //     sort(s.begin(), s.end());
//     //     sort(t.begin(), t.end());
//     //     for(int i=0; i<n; i++) if(s[i]!=t[i]) return t[i];
//     //     return t[n];
//     // }
    
    
// };
class Solution {
public:
    char findTheDifference(string s, string t) {
        char c = 0;
        for(char cs : s) c ^= cs;
        for(char ct : t) c ^= ct;
        return c;
    }
};