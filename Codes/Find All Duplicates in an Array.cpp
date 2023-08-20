class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> v;
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto value:mp){
            if(value.second>=2){
                v.push_back(value.first);
            }
        }
        return v;
    }
};
