class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> v = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        vector<char> c ={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
        map<char,string> m;
        for(int i=0;i<26;i++){
            m[c[i]]=v[i];
        }
        vector<string> temp;
        for(int i=0;i<words.size();i++){
            string s="";
            for(int j=0;j<words[i].size();j++){
                s = s + m[words[i][j]];
            }
            temp.push_back(s);
        }
        set<string> st;

        for(int i=0;i<temp.size();i++){
           st.insert(temp[i]);
        }
        return st.size();
    }
};
