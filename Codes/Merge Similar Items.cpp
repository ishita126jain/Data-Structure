class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<vector<int>> ans,temp(items1);
        temp.insert(temp.end(),items2.begin(),items2.end());
        map<int,int> mp;
        for(int i=0;i<temp.size();i++){
            mp[temp[i][0]]=0;
        }
        for(int i=0;i<temp.size();i++){
            mp[temp[i][0]]+=temp[i][1];
        }
        for(auto value:mp){
           vector<int> v;
           v.push_back(value.first);
           v.push_back(value.second);
           ans.push_back(v);
        }
        return ans;
    }
};
