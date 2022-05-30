class MinStack {
public:
    // Using Two Stacks 
    // TC --> O(1) but SC --> O(2N) for two stacks 
    stack<int>mindata;
    stack<int>alldata;
    MinStack() {//this is just a constructer
    }
    
    void push(int val) {
        alldata.push(val);
        if(mindata.size()==0 or mindata.top()>=val)
        {
            mindata.push(val);
        }
    }
    
    void pop() {
        if(mindata.size()==0)return ;
        else{
           int rv =  alldata.top();
            alldata.pop();
            if(rv==mindata.top())mindata.pop();
        }
    }
    
    int top() {
        if(mindata.size()==0)return -1;
        else{
           return alldata.top();
        }
        
    }
    
    int getMin() {
        
            return mindata.top();
    }
};