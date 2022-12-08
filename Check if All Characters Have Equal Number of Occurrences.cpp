class Solution {
public:
    bool areOccurrencesEqual(string s) {
        int n=s.size();
        unordered_map<char,int> mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        int temp = mp[s[0]];
        for(auto value:mp){
            if(value.second!=temp){
                return false;
            }
        }
        return true;
    }
};
