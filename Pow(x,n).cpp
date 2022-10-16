class Solution {
public:
    double myPow(double x, int n) {
        double ans;
        if(n==0){
            return 1;
        }
        if(n>0){
            ans=x*(pow(x,(x,n-1))); 
           return ans;
       }
         if(n<0){
             ans= 1/x*(pow(x,(x,n+1)));
             return ans;
         }
        return ans;
    }
};
