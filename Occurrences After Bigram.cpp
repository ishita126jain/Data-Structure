class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        stringstream s(text);
        string word;
        vector<string> str;
        vector<string> ans;
        while(s>>word){
            str.push_back(word);
        }
        for(int i=0;i<str.size()-2;i++){
            if(str[i]==first && str[i+1]==second){
                ans.push_back(str[i+2]);
            }
        }
        return ans;
    }
};
