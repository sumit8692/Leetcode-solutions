class Solution {
public:
    int countPairs(vector<int>& deliciousness) {
        unordered_map<int,int> mp;
        int mod = 1000000007;
        long long res = 0;
        for(int d: deliciousness){
            
            for(int i = 0; i <= 21; i++){
                
                int pow = 1<<i;
                if(mp.find(pow-d) != mp.end())  res += mp[pow-d];
                    
            }
            
            mp[d]++;
            
        }
        
        return (int)(res%mod);
        
    }
};