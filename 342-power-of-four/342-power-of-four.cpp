class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n == 0)  return false;
        
        if(n == 1)  return true;
        
        long long temp = 4;
        
        while(temp<=n){
            if(temp == n)    return true;
            temp = temp << 2;
        }
        
        return false;
    }
};