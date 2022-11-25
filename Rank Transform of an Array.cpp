class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int> temp(arr.begin(),arr.end());
        unordered_map<int,int> mp;
        int rank=1;
        for(auto &value:temp){
            mp[value]=rank++;
        }
       for(auto &value:arr){
           value=mp[value];
       }
        return arr;
    }
};
