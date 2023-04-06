class Solution {
public:
    int reverse(int n){
        int rev=0;
        while(n!=0){
            int temp=n%10;
            rev=rev*10 + temp;
            n=n/10;
        }
        return rev;
    }
    bool isSameAfterReversals(int num) {
        int rev=reverse(num);
        int d_rev=reverse(rev);
        if(num==d_rev){
            return true;
        }
        return false;
    }
};
