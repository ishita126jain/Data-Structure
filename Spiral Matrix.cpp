class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int row_top = 0;
        int col_left = 0;
        int row_bottom = m;
        int col_right = n;
        vector<int> ans;

        while(row_top < row_bottom && col_left < col_right){
            for(int i=col_left;i<col_right;i++){
            ans.push_back(matrix[row_top][i]);
        }
            row_top++;
            for(int i=row_top;i<row_bottom;i++){
                ans.push_back(matrix[i][col_right-1]);
            }
            col_right--;
            if (row_top >= row_bottom || col_left >= col_right){
                break;
            }
            for(int i=col_right-1;i>=col_left;i--){
                ans.push_back(matrix[row_bottom-1][i]);
            }
            row_bottom--;
            for(int i=row_bottom-1;i>=row_top;i--){
                ans.push_back(matrix[i][col_left]);
            }
            col_left++;
        }
        

        return ans;
    }
};
