class Solution {
public:
    int minFlips(int a, int b, int c) {
        int count=0;
        int num1,num2,num3;
        while(a || b || c){
            num1=a&1;
            num2=b&1;
            num3=c&1;

            if((num1 || num2)!=num3){
                if(num3==1){
                    count++;
                }
                else{
                    if((num1==0 && num2==1)||(num1==1 && num2==0)){
                        count++;
                    }
                    else{
                        count=count+2;
                    }
                }
            }
            a=a>>1;
            b=b>>1;
            c=c>>1;
        }
        return count;
    }
};
