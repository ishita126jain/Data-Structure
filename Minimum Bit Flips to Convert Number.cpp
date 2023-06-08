class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count=0;
        int num1,num2;
        while(start || goal){
            num1=start&1;
            num2=goal&1;

            if(num1!=num2){
                count++;
            }
            start=start>>1;
            goal=goal>>1;
        }
        return count;
    }
};
