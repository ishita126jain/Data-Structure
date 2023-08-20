class Solution {
public:
    string sortSentence(string s) {
        stringstream str(s);
        string word;
        string ans;
        int count=0;
        while(str>>word){
            count++;
        }
        stringstream str1(s);
        string word1;
        vector<string> v(count,"*");
        while(str1>>word1){
            int temp = word1.back()-49;
            
            word1.pop_back();
            v[temp]=word1;
        }
       for(auto value:v){
           ans=ans+value+" ";
       }
       ans.pop_back();
        return ans;
    }
};
