class Solution {
public:
    int subtractProductAndSum(int n) {
        int temp=0,sum=0,product=1;
       while(n!=0){
           temp=n%10;
           product=product*temp;
           sum=sum+temp;
           n=n/10;
       }
        return product-sum;
    }
};
