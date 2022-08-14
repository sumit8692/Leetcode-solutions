class Solution {
public:
    bool checksubstring(unordered_map<string, int> wordcount, string s, int wordlen){
        
        for(int j = 0; j < s.size(); j+=wordlen){
            string w = s.substr(j, wordlen);
            if(wordcount.find(w) != wordcount.end()){
                if(--wordcount[w] == -1)    return false;
            }
            else    return false;
        }
        return true;
    }
    
    vector<int> findSubstring(string s, vector<string>& words) {
        
        vector<int> res;
        int wordlen = words[0].size();
        int slen = s.size();
        int wordswindow = words.size() * wordlen;
        
        unordered_map<string, int> wordcount;
        
        for(int i = 0; i < words.size(); i++)   wordcount[words[i]]++;
        
        int i = 0;
        
        while(i + wordswindow <= slen){
            if(checksubstring(wordcount, s.substr(i, wordswindow), wordlen)) res.push_back(i);
            i++;
        }
        
        return res;
        
    }
};