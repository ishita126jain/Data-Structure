class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int> mp;
        for(int i=0;i<paths.size();i++){
            mp[paths[i][1]]++;
        }
     
       for(int i=0;i<paths.size();i++){
           if(mp.find(paths[i][0]) !=mp.end()){
               mp[paths[i][0]]--;
           }
       }
       for(auto value:mp){
           if(value.second==1){
               return value.first;
           }
       }
       return "";
    }
};
