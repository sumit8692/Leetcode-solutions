class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> mp;
        
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        
        int n=s.length();
        int ans=0;
        for(int i=0;i<n;)
        {
            // if the value of the next element is greater than previous one 
            // for example if we encounter IX , then basically we need to subtract the value of 'I' from value of 'X' and then add to answer and then also increment the iterator i by 2 , as we have already considered i+1 element
            // 'IX'= 10-1=9
            // 'XL'= 50-10=40
            // 'IV'= 5-1=4
            if(i+1<n && mp[s[i]]<mp[s[i+1]])
            {
                ans=ans+mp[s[i+1]]-mp[s[i]];
                i=i+2;
            }
            // else we can simply add the value of s[i] to answer and increment i by 1
            // example- 'VIII' = 5+1+1+1 = 8
            //          'LX' = 50+10=60    
            else
            {
                ans=ans+mp[s[i]];
                i++;
            }
        }
        return ans;
    }
};