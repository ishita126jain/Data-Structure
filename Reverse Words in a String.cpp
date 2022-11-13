class Solution {
public:
    string reverseWords(string s) {
     stringstream str(s);
     string word;
    vector<string> v;
    string ans="";
     while(str>>word){
         v.push_back(word);
     }
    for(int i=v.size()-1;i>=0;i--){
        if(i!=0){
            ans=ans+v[i]+" ";
        }
        else{
            ans=ans+v[i];
        }
    }
        return ans;
    }
};
