class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        
        int temp;
        long long ans=0;
        int y=x;
        while(x!=0){
            temp=x%10;
            ans=ans*10+temp;
            x=x/10;
        }
        
        if(y==ans){
            return true;
        }
        return false;
    }
};
