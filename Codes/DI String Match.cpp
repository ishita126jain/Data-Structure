class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> perm;
        int st=0;
        int en=s.size();
        for(int i=0;i<s.size();i++){
            if(s[i] == 'I'){
                perm.push_back(st);
                st++;
            }
            else{
                perm.push_back(en);
                en--;
            }
        }
        if(s[s.size()-1]=='I'){
            perm.push_back(st);
        }
        else{
            perm.push_back(en);
        }
        return perm;
    }
};
