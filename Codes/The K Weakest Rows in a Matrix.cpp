class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> ans,v;
        multimap<int,int> temp;
        for(int i=0;i<mat.size();i++){
            int count=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                   count++;
                }
            }
            temp.insert({count,i});
        }
        for(auto value:temp){
            v.push_back(value.second);
        }
        for(int i=0;i<k;i++){
            ans.push_back(v[i]);
        }
        return ans;
    }
};
