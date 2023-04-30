class Solution {
public:
    int distMoney(int money, int children) {
        if( money<children){
            return -1;
        }
        if(money == children*8){
            return children;
        }
        if(money > children*8){
            return children-1;
        }
        int temp = money-children;
        int ans = temp/7;
        int rem = temp%7;
        if(children - ans == 1 && rem == 3){
            ans--;
        }
        return ans;
    }
};
