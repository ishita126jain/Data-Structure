class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.size();
        int m=t.size();
        int j=0;
        int i=0;
        if(m<n){
            return false;
        }
        for(i=0;i<n;i++){
          while(j!=m){
                if(s[i]==t[j]){
                    j++;
                    break;
                }
                if(j==m-1){
                return false;
            }
             
              j++;
             
            }
             
              if(i<n-1 && j==m){
                
                return false;
            }
        }
       
        return true;
    }
};
