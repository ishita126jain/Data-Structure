class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        map<int,char> mp;
        int n=s.size();
        for(int i=0;i<n;i++){
            mp[indices[i]]=s[i];
        }
        string ans="";
        for(auto value:mp){
            ans.push_back(value.second);
        }
        return ans;
    }
};
