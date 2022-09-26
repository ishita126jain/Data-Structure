class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
         int n=matrix[0].size();
        int i=0;
        int j=n-1;
        while(i<m && j>=0 )
      {
                int s=matrix[i][j];
                if(target==s){
                    return true;
            }
            else if(target<s){
                j--;
            }
            else if(target>s){
                i++;
            }
        }
        return false;
    }
};
