class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0 || n==-1){
            return false;
        }
        unsigned int x=n;
        double ans=log10(x)/log10(3);
        if(ans-int(ans)==0){
            return true;
        }
        return false;
    }
};
