class Solution {
public:
    
    int tribonacci(int n) {
       
      long long int num1=0;
      long long int num2=1;
      long long int num3=1;
      if(n==0){
          return 0;
      }
      else if(n==1 || n==2){
          return 1;
      }
       n=n-2;
      int ans=0;
      while(n--){
          ans=num1+num2+num3;
          num1=num2;
          num2=num3;
          num3=ans;
      }
       return ans; 
    }
};
