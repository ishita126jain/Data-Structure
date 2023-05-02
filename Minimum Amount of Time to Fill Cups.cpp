class Solution {
public:
    int fillCups(vector<int>& amount) {
        int ans=0;
        while(true){
            sort(amount.begin(),amount.end());
            if(amount[2]>0){
                amount[2]--;
                ans++;
            }
            if(amount[1]>0){
                amount[1]--;
            }
            else if(amount[2]==0){
                break;
            }
        }
        return ans;
    }
};
