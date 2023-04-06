class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        string rstr="";
        
        for(int i=0;i<s.size();i++){
            if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')){
                str.push_back(s[i]);
            }
            
        }
        transform(str.begin(),str.end(),str.begin(),::tolower);
       for(int i=s.size()-1;i>=0;i--){
            if(s[i]>='a' && s[i]<='z' || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9')){
                rstr.push_back(s[i]);
            }
        } 
        transform(rstr.begin(),rstr.end(),rstr.begin(),::tolower);
        cout<<str<<endl;
        cout<<rstr;
        if(str==rstr){
            return true;
        }
        else{
            return false;
        }
    }
};
