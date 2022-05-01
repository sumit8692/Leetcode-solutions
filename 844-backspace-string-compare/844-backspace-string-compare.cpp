// class Solution {
// public:
//     bool backspaceCompare(string s, string t) {
//         stack<char> s1, s2;
        
//         for(int i = 0; i < s.size(); i++){
//             if(s[i]=='#' and !s1.empty())   s1.pop();
// 			else if(s[i]!='#')  s1.push(s[i]);
// 		}
// 		for(int i=0;i<t.size();i++){
// 			if(t[i]=='#' and !s2.empty())   s2.pop();
// 			else if(t[i]!='#')  s2.push(t[i]);
// 		}
// 		return s1==s2;
        
        
        
        
        
        
// 	}
// };
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int j=0,k=0;
        // for 1st string
        for(int i=0;i<s.size();i++)
        {
           if(s[i]=='#')
           {
                j--;
                j=max(0,j); // j will never be -ve
           }
           else
           {
               s[j]=s[i];
               j++;
           }
        }
        // for 2nd string
        for(int i=0;i<t.size();i++)
        {
           if(t[i]=='#')
           {
                k--;
                k=max(0,k); // k will never be -ve
           }
           else
           {
               t[k]=t[i];
               k++;
           }
        }
        if(j!=k) return false;
        else
        {
            for(int i=0;i<k;i++)
            {
                if(s[i]!=t[i]) return false;
            }
            return true;
        }
    }
};