class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int count=0;
        for(auto i:costs){
            coins -= i;
            if(coins<0){
                break;
            }
            count++;
        }
        return count;
    }
};
