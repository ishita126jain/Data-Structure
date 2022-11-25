class Solution {
public:
    int maxPower(string s) {
        int len=0;
        int max_len=0;
        int i=0;
        while(i!=s.size()){
            len=0;
            char a=s[i];
            while(s[i]==a){
                len++;
                i++;
            }
            max_len=max(len,max_len);
        }
        return max_len;
    }
};
