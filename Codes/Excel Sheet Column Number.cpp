class Solution {
public:
    int titleToNumber(string columnTitle) {
        
         string s="";
        int ans=0;
        int n=columnTitle.size();
        int m=n-1;
       for(int i=0;i<n;i++){
           int x=columnTitle[i]-'A';
           ans=ans+ ((x+1)*pow(26,m));
           m--;
       }
        return ans;
    }
};
