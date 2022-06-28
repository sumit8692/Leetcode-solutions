class Solution {
public:
    int largestInteger(int num) {
        
        string s = to_string(num);
        
        priority_queue<int> odd, even;
        
        for(auto x: s){
            int temp = x-'0';
            if(temp%2)  odd.push(temp);
            else        even.push(temp);
        }
        
        for(auto &x: s){
            int temp = x-'0';
            if(temp%2){
                x = odd.top()+'0';
                odd.pop();
            }
            else{
                x = even.top()+'0';
                even.pop();
            }
        }
        return stoi(s);
    }
};