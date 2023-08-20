class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n= nums.size();
        int count=0;
        unordered_map<int,int> mp;

        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto value:mp){
            count+=((value.second)*(value.second-1))/2;
        }
        return count;
    }
};
