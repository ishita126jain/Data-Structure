class Solution {
public:
    bool isPowerOfTwo(int n) {
        // unsigned int x=n;
        // cout<<x;
        
        if(n==0 || n==-1){
            return false;
        }
        if(n<0){
            if((n&n+1)==0){
                return true;
            }
        }
       if(n>0){
            if((n&n-1)==0){
                return true;
            }
        }
        return false;
    }
};
