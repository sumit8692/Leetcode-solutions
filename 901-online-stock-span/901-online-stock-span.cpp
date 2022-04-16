class StockSpanner {
public:
    stack<pair<int, int>> st; // pair<price, index>
    int index = 0;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int temp = -1;
        if(st.empty()){
            temp = 1;
        }
        else{
            if(price < st.top().first)
                temp = index - st.top().second;
            else{
                while(!st.empty() && st.top().first <= price)
                    st.pop();
                if(st.empty())
                    temp = index+1;
                else
                    temp = index - st.top().second;
            }
        }
        st.push({price, index});
        index++;
        return temp; 
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */