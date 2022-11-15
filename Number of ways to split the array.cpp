class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        long long right_sum=0;
        long long left_sum=0;

        for(int i=0;i<n;i++){
            right_sum+=nums[i];
        }
        for(int i=0;i<n-1;i++){
            left_sum+=nums[i];
            right_sum-=nums[i];

            if(left_sum>=right_sum){
                ans++;
            }
        }
        return ans;
    }
};
