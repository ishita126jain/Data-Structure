class Solution {
public:
    string frequencySort(string s) {
        map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        multimap<int,char> temp;
        for(auto value:mp){
            temp.insert({value.second,value.first});
        }
        string ans;
        for(auto value:temp){
            for(int i=0;i<value.first;i++){
                ans.push_back(value.second);
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
