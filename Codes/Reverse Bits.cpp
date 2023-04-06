class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
       uint32_t m=0;
        int a=31;
        int i=0;
        while( a>=0){
            if((n&(1<<i))==0){
             
                a--;
            }
            else 
            {
              
                m+=pow(2,a);
                a--;
            }
         
            i++;
           
        }
       
        return m;
    }
};


        
