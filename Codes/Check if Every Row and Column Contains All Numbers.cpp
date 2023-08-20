class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int> temp;
        for(int i=1;i<=n;i++){
            temp.push_back(i);
        }
        for(int i=0;i<n;i++){
            int m=matrix[i].size();
            vector<int> v;
            for(int j=0;j<m;j++){
                v.push_back(matrix[i][j]);
            }
            sort(v.begin(),v.end());
            for(int k=0;k<v.size();k++){
                if(temp[k]!=v[k]){
                    return false;
                }
            }
        }
        for(int i=0;i<m;i++){
           
            vector<int> v;
            for(int j=0;j<n;j++){
                v.push_back(matrix[j][i]);
            }
            sort(v.begin(),v.end());
            for(int k=0;k<v.size();k++){
                if(temp[k]!=v[k]){
                    return false;
                }
            }
        }
        return true;
    }
};
