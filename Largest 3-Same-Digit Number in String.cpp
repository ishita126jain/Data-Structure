class Solution {
public:
    string largestGoodInteger(string num) {
        set<string> se;
       
        for(int i=0;i<=num.size()-3;i++){
            string s="";
            for(int j=i;j<i+3;j++){
                s.push_back(num[j]);
            }
           
            int flag=0;
            for(int j=0;j<s.size()-1;j++){
                if(s[j]!=s[j+1]){
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                se.insert(s);
            }
        }
     
        string ans="";
        for(auto value:se){
           ans=value;
         
        }
        return ans;
    }
};
