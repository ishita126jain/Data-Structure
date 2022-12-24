class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int count=0;
        vector<int> ans;
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto value:mp){
            if(value.second>=2){
                int x=value.second;
                if(x%2!=0){
                    x=x-1;
                }
                
                int y = x/2;
                count+=y;
                n=n-(y*2);
            }
        }
        ans.push_back(count);
        ans.push_back(n);
        return ans;
    }
};
