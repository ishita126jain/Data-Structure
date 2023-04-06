class Solution {
public:
    bool check(string str1,string str2,map<char,int> m){
       int a=str1.length();
         int b=str2.length();
        
         for(int i=0;i<a&& i<b;i++){
             
       
            if(m[str1[i]]>m[str2[i]]){
                return false;
            }
             
        }
         if(a>b){
            
       
            if(m[str1[b-1]]>=m[str2[b-1]]){
                return false;
            }
            else{
                return true;
            }     
        
         }
       
        
        return true;
    }
    bool isAlienSorted(vector<string>& words, string order) {
        map<char,int> m;
        int n=order.size();
        for(int i=0;i<n;i++){
            m[order[i]]=i;
        }
       for(int i=0;i<words.size()-1;i++){
           if(m[words[i][0]]> m[words[i+1][0]]){
               return false;
           }
           else if(m[words[i][0]]== m[words[i+1][0]]){
               if(check(words[i],words[i+1],m)==false) {
                   return false;
               }
           }
           
       }
        return true;
    }
};
