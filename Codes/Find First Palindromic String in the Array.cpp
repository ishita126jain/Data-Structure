class Solution {
public:
    string firstPalindrome(vector<string>& words) {
       
        vector<string> rev;
        for(int i=0;i<words.size();i++){
            rev.push_back(words[i]);
        }
        for(int i=0;i<rev.size();i++){
            reverse(rev[i].begin(),rev[i].end());
        }
        for(int i=0;i<words.size();i++){
            if(words[i]==rev[i]){
                return words[i];
                break;
            }
        }
        return "";
    }
};
