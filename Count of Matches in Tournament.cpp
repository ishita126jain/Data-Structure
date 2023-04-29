class Solution {
public:
    int numberOfMatches(int n) {
        int ans=0;
        int matches=0;
        int team=0;
        while( team!=1){
            if(n%2==0){
                matches = n/2;
                team = n/2;
            }
            else{
                matches = (n-1)/2;
                team = ((n-1)/2)+1;
            }
            ans=ans+matches;
            n=team;
        }
        return ans;
    }
};
