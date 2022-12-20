class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<vector<int>> ans(n-2,vector<int> (n-2,0));
        for(int i=0;i<n-2;i++){
            for(int j=0;j<n-2;j++){
                int mx=0;
                mx=max(mx,max(grid[i][j],max(grid[i][j+1],grid[i][j+2])));
                mx=max(mx,max(grid[i+1][j],max(grid[i+1][j+1],grid[i+1][j+2])));
                mx=max(mx,max(grid[i+2][j],max(grid[i+2][j+1],grid[i+2][j+2])));

                ans[i][j]=mx;
            }

        }
        return ans;
    }
};
