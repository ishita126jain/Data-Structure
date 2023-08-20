class Solution {
public:
    string customSortString(string order, string s) {
        string str="";
        for(int i=0;i<order.size();i++){
            for(int j=0;j<s.size();j++){
                if(order[i]==s[j]){
                    str.push_back(order[i]);
                }
            }
        }
        order=str;
        
        
       
        for(int i=0;i<s.size();i++){
            int flag=0;
            for(int j=0;j<order.size();j++){
              
               if(s[i]==order[j]){

                   flag=1;
                   break;
               }
                
            }
            
            if(flag==0){
             
                str.push_back(s[i]);
            }
            
        }
        return str;
    }
};
