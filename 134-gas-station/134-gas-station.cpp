class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int start = 0;
        int ext_fuel = 0;
        int req_fuel = 0;
        
        for(int i = 0; i < gas.size(); i++){
            ext_fuel+=(gas[i]-cost[i]);
            
            if(ext_fuel < 0){
                start = i+1;
                req_fuel += ext_fuel;
                ext_fuel = 0;   
            }
        }
        
        return (ext_fuel+req_fuel>=0)?(start):-1;
    }
};