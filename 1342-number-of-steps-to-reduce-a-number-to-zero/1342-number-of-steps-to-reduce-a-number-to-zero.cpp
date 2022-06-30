class Solution {
public:
int numberOfSteps(int num) { //  number of steps to reach 0    
        int count = 0; // number of steps 
        
        while(num) num = num & 1? num-1:num>>1, count++; // while n is not 0

        return count; // return count
    
    }
};