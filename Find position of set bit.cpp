class Solution {
  public:
    int findPosition(int N) {
        // code here
       
        long long x=N-1;
        int flag=0;
        if(N==0){
            flag=0;
        }
        else if((N&x)==0){
            flag=1;;
        }
        else{
            flag=0;;
        }
        if(flag==1){
            int i=0;
            int pos=0;
            while(N!=0){
                if((N&(1<<i))!=0){
                    pos++;
                    return pos;
                }
                N=N>>1;
                pos++;
            }
        }
        return -1;
        
    }
};
