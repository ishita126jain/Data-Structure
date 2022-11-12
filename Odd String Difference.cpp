class Solution {
public:
    string oddString(vector<string>& words) {
        vector<vector<int>> vv;
        
        for(int i=0;i<words.size();i++){
            vector<int> v;
            for(int j=0;j<words[i].size()-1;j++){
                int a = words[i][j+1]-words[i][j];
                v.push_back(a);
            }
            vv.push_back(v);
        }
        map<vector<int>,int> mp;
        for(int i=0;i<vv.size();i++){
            mp[vv[i]]++;
        }
        vector<int> ans;
        for(auto value:mp){
           if(value.second == 1){
               ans=value.first;
           }
        }
        int x=0;
      for(int i=0;i<vv.size();i++){
          if(vv[i]==ans){
             x=i;
          }
      }
        return words[x];
    }
};
