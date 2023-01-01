class Solution {
public:
    string reversePrefix(string word, char ch) {
        string temp;
        int i=0;
        int n=word.size();
        while(word[i]!=ch && i<n){
            temp.push_back(word[i]);
            if(i==n-1){
            return word;
            }
            i++;
        }
        temp.push_back(word[i]);
        reverse(temp.begin(),temp.end());

        string ans="";
        ans=ans+temp;
        for(int j=i+1;j<word.size();j++){
            ans.push_back(word[j]);
        }
        return ans;
    }
};
