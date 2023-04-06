class Solution {
public:
    string toLowerCase(string s) {
        int n=s.size();
        string str;
        for(int i=0;i<n;i++){
            if(s[i]>=65 && s[i]<=90){
                str.push_back(32+s[i]);
            }
            else{
                 str.push_back(s[i]);
            }
        }
        return str;
    }
};
