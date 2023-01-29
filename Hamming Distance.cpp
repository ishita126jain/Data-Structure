class Solution {
public:
    int hammingDistance(int x, int y) {
        int d = 0;
        while(x || y){
            d += (x&1)^(y&1);
            x = x>>1;
            y = y>>1;

        }
        return d;
    }
};
