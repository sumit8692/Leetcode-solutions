class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five = 0, tens = 0;
        for(int money: bills){
            if(money == 5)  five++;
            else if(money == 10){tens++; five--;}
            else{
                if(tens > 0){
                    tens--;
                    five--;
                }
                else    five-=3;
            }
            if(five < 0)   return false;
        }
        
        return true;
        
    }
};