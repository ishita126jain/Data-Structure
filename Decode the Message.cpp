class Solution {
public:
    string decodeMessage(string key, string message) {
        vector<char> v1;
        vector<char> v2;
        for(int i=0;i<26;i++){
            v1.push_back(i+97);
        }
        for(int i=0;i<key.size();i++){
            vector<char> :: iterator it;
            it = find(v2.begin(),v2.end(),key[i]); 
            if(key[i]!=' ' && it==v2.end()){
                v2.push_back(key[i]);
            }
        }
        map<char,char> m;
        for(int i=0;i<v1.size();i++){
            m[v2[i]]=v1[i];
        }
        string ans;
        for(int i=0;i<message.size();i++){
            if(message[i]==' '){
                ans.push_back(' ');
            }
            else{
                ans.push_back(m[message[i]]);
            }
        }
        return ans;
    }
};
