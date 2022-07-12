class Solution {
public:
    int a, b, c, d;
    int fun(vector<int> &matchsticks,int i){
        
        if(i == matchsticks.size()){
            if(a == 0 && b == 0 && c == 0 && d == 0) return true;
            return false;
        }
        
        if(matchsticks[i] <= a){
            a -= matchsticks[i];
            if(fun(matchsticks,i+1))    return true;
                a += matchsticks[i];
        }
        
        if(matchsticks[i] <= b){
            b -= matchsticks[i];
            if(fun(matchsticks,i+1))    return true;
                b += matchsticks[i];
        }
        
        if(matchsticks[i] <= c){
            c -= matchsticks[i];
            if(fun(matchsticks,i+1))    return true;
                c += matchsticks[i];
        }
        
        if(matchsticks[i] <= d){
               d -= matchsticks[i];
               if(fun(matchsticks,i+1))     return true;
                 d += matchsticks[i];
        }
        
        return false;
        
    }
    bool makesquare(vector<int>& matchsticks) {
        
        if(matchsticks.size() < 4)  return false;
        
        int sum = accumulate(matchsticks.begin(), matchsticks.end(), 0);
        if(sum % 4 != 0)    return false;
        int sizesum = sum/4;
        a = sizesum, b = sizesum, c = sizesum, d = sizesum;
        sort(matchsticks.rbegin(), matchsticks.rend());
        
        return fun(matchsticks,0);
             
    }
};