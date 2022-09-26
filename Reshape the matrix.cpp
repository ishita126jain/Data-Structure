class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
      int a=mat.size();
        int b=mat[0].size();
        int s=a*b;
        int x=r*c;
        int count=0;
      vector<vector<int>> v(r,vector<int>(c));
        if(s!=x){
            return mat;
        }
        vector<int> vv;
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                vv.push_back(mat[i][j]);
            }
        }
        if(s==x){
           for(int i=0;i<r;i++){
               for(int j=0;j<c;j++){
                   v[i][j]=vv[count++];
               }
           }
        }
        return v;
       
    }
};
