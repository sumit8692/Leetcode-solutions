class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0, mul = 1;
        while(n){
            int temp = n%10;
            mul *= temp;
            sum += temp;
            n/=10;
        }
        return (mul - sum);
    }
};