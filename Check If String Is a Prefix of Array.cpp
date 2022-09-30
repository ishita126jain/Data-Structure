class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
                    int i=0,j=0,k=0;
        int len=0;
                    for(int a=0;a<words.size();a++){
                        len=len+words[a].length();
                    }
       
        while(i<words.size() ){
            j=0;
                    while(j<words[i].length() && k<s.length() ){
                    if(s[k]!=words[i][j] || words[i].size()> s.size() || len<s.size()){
                        return false;
                    }
                    else{
                       
                        j++;
                        k++;
                    }
                        if(k==s.size() && j!=words[i].size()){
             
                return false;
                 }
                        
                    }
            
            
            i++;
        }
        return true;
    }
};
