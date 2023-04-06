class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> mp;
        vector<int> v;
        map<int,int> temp;
        for(int i=0;i<arr.size();i++){
           mp[arr[i]]++;
        }
         for(auto value:mp){
           v.push_back(value.second);
        }
        for(auto value:v){
            temp[value]++;
        }
        for(auto value:temp){
             if(value.second!=1){
                return false;
            }
        }
        return true;
    }
};
