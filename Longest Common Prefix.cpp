class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       
      
       string s="";
        string st1=s;
        string st2=s;
        int min_length=INT_MAX;
        for(int i=0;i<strs.size();i++){
            if(min_length>strs[i].length()){
                min_length=strs[i].length();
            }
        }
        
       
        for(int i=0;i<min_length;i++){
           
              int count[26];
             for(int a=0;a<26;a++){
            count[a]=0;
             }
            for(int j=0;j<strs.size();j++){
                count[strs[j][i]-'a']++;
                
            }
          
            for(int c=0;c<26;c++){
             
               
                if(count[c]==strs.size()){
               
                    char ch= char(c+97);
                   
                    s=s+ch;
                    break;
                }
                
                else{
                  
                    continue;
                }
              
           }
            for(int x=0;x<26;x++){
                if(count[x]==strs.size()){
                    break;
                }
                else if(x==25){
                    return s;
                }
                else{
                    continue;
                }
            }
        
        }
      
        return s;
    }
};
