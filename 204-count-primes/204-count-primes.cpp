class Solution {
public:
    int countPrimes(int n) {
        
        if(n==0)  return 0;
        vector<bool> isprime(n,true);
        isprime[0] = isprime[1] = false;
        int count = 0;
        for(int i = 2; i < n; i++){ 
            if(isprime[i] == true){ 
                count++;
                for(int j=2*i;j < n;j+=i)    isprime[j] = false;
            }
        }
        return count;
    }
};