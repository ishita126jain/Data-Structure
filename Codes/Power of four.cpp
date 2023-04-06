class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==0 || n==-1){
            return false;
        }
        unsigned int x=n;
        double ans = log10(x)/log10(4);
        if(ans-int(ans)==0){
            return true;
        }
        return false;
    }
};
