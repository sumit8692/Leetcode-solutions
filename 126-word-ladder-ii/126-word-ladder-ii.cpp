class Solution {
public:
    
    bool able(string s, string t){
        int c = 0;
        for(int i = 0; i < s.length(); i++) c += (s[i]!=t[i]);
        return c == 1;
    }
    
    void bfs(vector<vector<int>> &g, vector<int> parent[], int n, int start, int end){
        vector<int> dist(n, 1005);
        queue<int> q;
        q.push(start);
        parent[start] = {-1};
        dist[start] = 0;
        while(!q.empty()){
            int x = q.front();
            q.pop();
            for(int u: g[x]){
                if(dist[u] > dist[x] + 1){
                    dist[u] = dist[x]+1;
                    q.push(u);
                    parent[u].clear();
                    parent[u].push_back(x);
                }
                else if(dist[u] == dist[x]+1)   parent[u].push_back(x);
            }
        }
    }
    
    void shortestpaths(vector<vector<int>> &paths, vector<int> &path, vector<int> parent[], int node){
        
        if(node == -1){
            paths.push_back(path);
            return ;
        }
        for(auto u: parent[node]){
            path.push_back(u);
            shortestpaths(paths,path,parent,u);
            path.pop_back();
        }  
    }
    
    
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
        
        int n = wordList.size(), start = -1, end = -1;
        vector<vector<string>> ans;
        for(int i = 0; i < n; i++){
            if(wordList[i] == beginWord)    start = i;
            if(wordList[i] == endWord)      end = i;
        }
        
        if(end == -1)   return ans;
        if(start == -1){
            wordList.emplace(wordList.begin(), beginWord);
            start = 0;
            end++;
            n++;
        }
        
        vector<vector<int>> g(n,vector<int>()), paths;
        vector<int> parent[n], path;
        
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                if(able(wordList[i],wordList[j])){
                    g[i].push_back(j);
                    g[j].push_back(i);
                }
            }
        }
        
        bfs(g,parent,n,start,end);
        
        shortestpaths(paths,path,parent,end);
        
        for(auto u:paths){
            vector<string> now;
            for(int i = 0; i < u.size()-1; i++){
                now.push_back(wordList[u[i]]);                
            }
            reverse(now.begin(), now.end());
            now.push_back(wordList[end]);
            ans.push_back(now);
        }
        return ans;
    }
};