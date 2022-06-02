class Solution {
public:
//     vector<int> asteroidCollision(vector<int>& asteroids) {
// //         vector<int> ans;
        
// //         for(int i = 1; i < asteroids.size(); i++){
// //             if(asteroids[i] > 0 && asteroids[i-1] > 0)
// //                 ans.push_back(asteroids[i-1]);
// //             if(asteroids[i] < 0 && asteroids[i-1] > 0){
// //                 ans.push_back(max(asteroids[i],abs(asteroids[i-1])));
// //             }
// //         }
// //         return ans;
        
//         stack<int> st;
        
//         for(auto it: asteroids){
            
//             if(it > 0)  st.push(it);
            
//             else{
//                 while(st.top() < abs(it) && !st.empty())
//                     st.pop();
//                 if(st.empty() || st.top() < 0)  st.push(it);
//                 else if(st.top() + it == 0) st.pop();
                 
//             }
//         }
        
//         int n = st.size();
//         vector<int> ans(n,0);
        
//         while(!st.empty()){
//             ans[--n] = st.top();
//             st.pop();
//         }
//         return ans;
//     }
    vector<int> asteroidCollision(vector<int>& asteroids) {
int n = asteroids.size();
//Used vector as stack to save space
vector<int> s;

for(int i=0;i<n;i++){
    int asteroid = asteroids[i];
    if(asteroid>0){
        s.push_back(asteroid);
    }else{
        while(!s.empty() and s.back() > 0 and s.back() < (-1)*asteroid) s.pop_back();  
		//If a forward moving guy is found that is bigger than current asteroid do nothing step out of "else"
        if(s.empty() || s.back() < 0) s.push_back(asteroid); 
        else if(s.back() == (-1)*asteroid) s.pop_back();
    }
}    
return s;
}
};