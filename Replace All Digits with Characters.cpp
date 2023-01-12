class Solution {
public:
    string replaceDigits(string s) {
        string ans;
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z'){
                ans.push_back(s[i]);
            }
            else{
                int temp = s[i]-48;
                ans.push_back(s[i-1]+temp);
            }
        }
        return ans;
    }
};
