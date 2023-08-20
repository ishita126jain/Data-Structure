class Solution {
public:
    string reverseVowels(string s) {
        vector<char> v;
        string str;
        for(int i=0;i<s.length();i++){
            if( s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o'|| s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O'|| s[i]=='U' ){
                v.push_back(s[i]);
            }
        }
        reverse(v.begin(),v.end());
        int j=0;
       for(int i=0; i<s.length();i++){
            if( s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o'|| s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O'|| s[i]=='U'){
                str.push_back(v[j]);
                j++;
            }
            else{
                str.push_back(s[i]);
            }
       }
        return str;
    }
};
