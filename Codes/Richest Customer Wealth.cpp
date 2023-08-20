class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n=accounts.size();
        int sum=0;
        int max_sum=0;
        for(int i=0;i<n;i++){
            sum=0;
            for(int j=0;j<accounts[i].size();j++){
                sum=sum+accounts[i][j];
            }
            max_sum=max(sum,max_sum);
        }
        return max_sum;
    }
};
