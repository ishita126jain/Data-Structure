class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count=0;
        for(int i=0;i<words.size();i++){
             int x=0;
            for(int j=0;j<words[i].size();j++){
                if(words[i][j]==s[j] && s.length()>=words[i].length()){
                   
                    x++;
                   
                }
                else{
                    break;
                }
            }
            if(x==words[i].length()){
                count++;
            }
            
        }
        
        return count;
    }
};
