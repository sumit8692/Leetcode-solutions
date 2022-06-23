class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int s, int d) {
        
        unordered_map<int, vector<int>> graph;
        
        vector<bool> vis(n,false);
        
        for(auto a: edges){
            graph[a[0]].push_back(a[1]);
            graph[a[1]].push_back(a[0]);
        }
        
        queue<int> q;
        q.push(s);
        vis[s] = true;
        
        while(!q.empty()){
            
            int v = q.front();
            q.pop();
            
          
            vector<int> temp = graph[v];
            for(int i = 0; i < temp.size(); i++){
                int ver = temp[i];
                if(vis[ver] == false){
                       q.push(ver);
                       vis[ver] = true;
                    }
              }
            
            
        }
        return vis[d];
    }
};