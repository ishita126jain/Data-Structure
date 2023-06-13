class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        vector<vector<int>> v1;
        vector<vector<int>> v2;
        int n=grid.size();
       
        for(int i=0;i<n;i++){
            vector<int> temp;
            for(int j=0;j<n;j++){
                temp.push_back(grid[i][j]);
            }
            v1.push_back(temp);
        }
        for(int j=0;j<n;j++){
            vector<int> temp;
            for(int i=0;i<n;i++){
                temp.push_back(grid[i][j]);
            }
            v2.push_back(temp);
        }
        int count=0;
        for(auto i:v1){
            for(auto j:v2){
                if(i==j){
                    count++;
                }
            }
        }
        return count;
    }
};
