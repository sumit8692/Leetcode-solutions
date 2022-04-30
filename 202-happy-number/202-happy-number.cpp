class Solution {
public:
    int squaresum(int n){
        int sum = 0;
        while(n!=0){
            sum += (n % 10)*(n % 10);
            n = n/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        
        int fast = squaresum(squaresum(n));
        int slow = squaresum(n);
        
        while(fast != slow){
            slow = squaresum(slow);
            fast = squaresum(squaresum(fast));

        }
        
        if(fast == 1)   return true;
        
        return false;
    
        
    }
};