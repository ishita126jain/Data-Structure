class Solution {
public:
    int totalMoney(int n) {
        int ans=0;
        int temp=1;
        int i=1;
        int prev=1;
        while(n!=0){
            ans =ans+temp;
            n--;
            temp++;
            i++;
            if(i==8){
                prev++;
                i=1;
                temp=prev;
            }
        }
        return ans;
    }
};
