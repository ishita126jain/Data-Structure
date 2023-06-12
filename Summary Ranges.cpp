class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;
        int n=nums.size();
        int before=0;
        for(int i=1;i<=n;i++){
            if(i<n && nums[i]==nums[i-1]+1){
                continue;
            }
            else{
                int now = i-1;
                if(now==before){
                    ans.push_back(to_string(nums[before]));
                }
                else{
                    ans.push_back(to_string(nums[before])+"->"+to_string(nums[now]));
                }
                before = i;
            }
        }
        return ans;
    }
};
