class Solution {
public:
    double average(vector<int>& salary) {
        int mi = INT_MAX, ma = INT_MIN;
        int cnt = salary.size(), sum = 0;
        for(int i = 0; i < cnt; i++){
           if(salary[i] < mi)   mi = salary[i];
           if(salary[i] > ma)   ma = salary[i];
           sum+=salary[i];
       }
        cnt = cnt-2;
        return (double)(sum-mi-ma)/cnt;
        
    }
};