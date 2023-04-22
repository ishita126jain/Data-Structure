class Solution {
public:
    string reformat(string s) {
        string digit;
        string ch;

        for(int i=0;i<s.size();i++){
            if(s[i]>=48 && s[i]<=57){
               digit.push_back(s[i]);
            }
        }
        for(int i=0;i<s.size();i++){
            if(s[i]>=97 && s[i]<=122){
                ch.push_back(s[i]);
            }
        }
        int n = digit.size();
        int m = ch.size();
        string ans;
        if(n == m ){
            for(int i=0; i<n; i++){
                ans.push_back(digit[i]);
                ans.push_back(ch[i]);
            }
        }
        else if(m == n-1){
            for(int i=0; i<n; i++){
                ans.push_back(digit[i]);
                if(i!=n-1)
                ans.push_back(ch[i]);
            }
        }
        else if(n == m-1){
            for(int i=0; i<m; i++){
                ans.push_back(ch[i]);
                if(i!=m-1)
                ans.push_back(digit[i]);
            }
        }
        else{
            ans="";
        }
        return ans;
    }
};
