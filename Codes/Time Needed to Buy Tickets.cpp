class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int ans=0;
        while(1){
            for(int i=0;i<tickets.size();i++){
                if(tickets[i]==0){
                    continue;
                }
                tickets[i]--;
                ans++;
                if(tickets[k]==0){
                    return ans;
                }
            }
        }
        return 0;
    }
};
