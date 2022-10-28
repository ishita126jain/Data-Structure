class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char> m;
            for(int i=0;i<s.size();i++){
                if(m.find(s[i])!=m.end()){
                    char temp=m[s[i]];
                    if(temp!=t[i]){
                        return false;
                    }
                }
                m[s[i]]=t[i];
            }
        vector<char> v;
        for(auto value:m){
            v.push_back(value.second);
        }
        
        for(int i=0;i<v.size();i++){
            for(int j=i+1;j<v.size();j++){
                if(v[i]==v[j]){
                    return false;
                }
            }
        }
        
        return true;
    }
};
