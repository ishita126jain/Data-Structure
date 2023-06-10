class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int sum=0;
        int n=nums.size();
        for(int i=0;i<k;i++){
            sum+=nums[n-1];
            nums[n-1]++;
        }
        return sum;
    }
};
