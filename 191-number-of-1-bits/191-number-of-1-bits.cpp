class Solution {
public:
    int hammingWeight(uint32_t n) {
        // int ans=0;
        // while(n){
        //     if(n%2==1)  ans++;
        //     n =  n/2;
        // }
        // return ans; this is the naive approach
        
        //For optimised approach we use Karnighan's Algorithm
        int count = 0;
        while(n){
            n &= (n-1);
            count++;
        }
        return count;
    }
};