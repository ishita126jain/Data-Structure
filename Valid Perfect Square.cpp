class Solution {
public:
    bool isPerfectSquare(int num) {
        int y = 1;
        int n = num;
        while (n > y) {
            n = y +  (n - y) / 2;
            y = num / n;
        }
        int x;
        x=pow(n,2);
        if(x==num){
            return true;
        }
        return false;
    }
};
