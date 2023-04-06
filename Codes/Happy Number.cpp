class Solution {
public:
    int sum(int a){
        int ans=0;
        while(a!=0){
            int temp=a%10;
            ans=ans+pow(temp,2);
            a=a/10;
        }
        return ans;
    }
    bool isHappy(int n) {
       int slow,fast;
     slow=fast=n;
        do{
            slow=sum(slow);
            fast=sum(sum(fast));
        }while(slow!=fast);
        return (slow==1);
    }
};
