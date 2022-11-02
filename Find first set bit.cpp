class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        // Your code here
        int i=0;
        int pos=0;
        while(n!=0){
           
            if((n&(1<<i))!=0){
                 pos++;
                return pos;
            }
            n=n>>1;
            pos++;
        }
        return pos;
    }
};
