class Solution {
public:
    int firstUniqChar(string s) {
        int count[26];
        int pos[26];
        
        for(int i=0;i<26;i++){
            count[i]=0;
            pos[i]=0;
        }
        
        for(int i=0;i<s.length();i++){
            count[s[i]-'a']++;
            pos[s[i]-'a']=i;
        }
        int  x=INT_MAX;
        for(int i=0;i<26;i++){
            if(count[i]==1){
               x=min(pos[i],x); 
            }
            
        }
        if(x==INT_MAX){
            return -1;
        }
        return x;
    }
};
