class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());
        int n=cost.size();
        int count=0;
        int sum=0;
        for(int i=n-1;i>=0;i--){
            sum=sum+cost[i];
            count++;
            if(count==2){
                count=0;
                i--;
            }
            
        }
        return sum;
    }
};
