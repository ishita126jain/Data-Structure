class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int max_count=0;
        int index=0;
        vector<int> ans;
        for(int i=0;i<mat.size();i++){
            int count=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                    count++;
                }
                if(max_count < count){
                    index=i;
                    max_count = count;
                }

            }
        }
        ans.push_back(index);
        ans.push_back(max_count);
        return ans;
    }
};
