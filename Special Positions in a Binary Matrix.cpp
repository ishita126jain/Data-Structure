class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
       int count=0;
       int m = mat.size();
       int n= mat[0].size();
       map<int,int> r;
       map<int,int> c;
       for(int i=0;i<m;i++) {
           for(int j=0;j<n;j++){
               if(mat[i][j]==0){
                   r[i]++;
               }
           }
       }
       for(int j=0;j<n;j++) {
           for(int i=0;i<m;i++){
               if(mat[i][j]==0){
                   c[j]++;
               }
           }
       }
        for(int i=0;i<m;i++) {
           for(int j=0;j<n;j++){
               if(mat[i][j]==1 && r[i]==n-1 && c[j]==m-1){
                   count++;
               }
           }
       }
        return count;
    }
};
