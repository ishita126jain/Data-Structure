class Solution {
public:
    int rotatedDigits(int n) {
        int count=0;
        for(int i=1;i<=n;i++){
            int x=i;
            int d;
            bool flag = 0;
            while(x){
                d = x%10;
                x /= 10;
                if(d == 3 || d == 4 || d == 7){
                    flag = 0;
                    break;
                }
                else if(d == 2 || d == 5 || d == 6 || d == 9){
                    flag = 1;
                }
            }
            if(flag){
                count++;
            }
        }
        return count;
    }
};
