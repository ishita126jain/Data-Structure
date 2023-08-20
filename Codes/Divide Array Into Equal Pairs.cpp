class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n=nums.size();
        if(n%2!=0){
            return false;
        }

        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        for(auto value:mp){
            if(value.second%2!=0){
                return false;
            }
        }
        return true;
    }
};
