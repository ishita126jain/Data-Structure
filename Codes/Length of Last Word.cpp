class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        for(int i=s.size()-1;i>=0;i--){
            if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z')){
                count++;
            }
            else if(count>0 && s[i]==' '){
                break;
            }
        }
        return count;
    }
};
