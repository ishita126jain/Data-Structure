class Solution {
public:
    int countElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        map<int,int> m;
        int n=nums.size();
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        int ans=0;
        m[nums[0]]=0;
        m[nums[n-1]]=0;
        for(auto i:m){
            ans=ans+i.second;
        }
        return ans;
    }
};
