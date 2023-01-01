class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<string,set<char>> mp;
        stringstream str(s);
        string word;
        vector<string> v;
        while(str>>word){
            v.push_back(word);
        }
        if(pattern.size()!=v.size()){
            return false;
        }
        for(int i=0;i<v.size();i++){
            mp[v[i]].insert(pattern[i]);
        } 
        
        for(auto value:mp){
            if(value.second.size()>1){
                return false;
            }
        }
        map<char,int> m;
        for(auto value:mp){
           for(auto val:value.second){
               m[val]++;
           }
        }
        for(auto value:m){
            if(value.second>1){
                return false;
            }
        }
        return true;
    }
};
