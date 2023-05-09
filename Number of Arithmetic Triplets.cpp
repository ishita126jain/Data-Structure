class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int ans=0;
        unordered_map<int,bool> m;

        for(auto i:nums){ m[i]=true; }

        for(auto i:nums){
            if(m[i-diff] && m[i+diff]){
                ans++;
            }
        }
        return ans;
    }
};
