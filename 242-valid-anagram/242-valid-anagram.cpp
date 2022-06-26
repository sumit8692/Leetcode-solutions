class Solution {
public:
    bool isAnagram(string s, string t) {
//         if(s.length() != t.length())    return false;
        
//         sort(s.begin(),s.end());
//         sort(t.begin(),t.end());
        
//         for(int i = 0; i < s.size(); i++){
//             if(s[i] != t[i])    return false;
//         }
//         return true;
        
        if(s.length() != t.length())    return false;
   
        int count[256] = {0};
        for(int i=0;i<s.length();i++)   count[s[i]]++, count[t[i]]--;               
        for(int i=0;i<256;i++)  if(count[i]!=0) return false;

        return true;
        
    } 
};