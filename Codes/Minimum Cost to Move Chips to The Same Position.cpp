class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int n= position.size();
        int min_cost=INT_MAX;
        for(int i=0;i<n;i++){
            int cost=0;
            for(int j=0;j<n;j++){
                if((position[i] - position[j])%2!=0){
                    cost++;
                }
            }
            min_cost=min(cost,min_cost);
        }
        return min_cost;
    }
};
