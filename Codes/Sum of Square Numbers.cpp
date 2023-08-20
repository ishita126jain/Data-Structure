class Solution {
public:
    bool judgeSquareSum(int c) {
      int a=0;
        int b;
        int ans=0;
        
          a=sqrt(c);
       if(c==0){
           return true;
       }
        while(a!=0){
          // a=sqrt(c);
            
            ans=pow(a,2);
          
            if(ans==c){
            return true;
        }
       
         else{
           b=sqrt(c-ans); 
          
            if((ans+pow(b,2))==c){
              
                return true;
            }
        }
            a=a-1;
        }
        
        return false;
    }
};
