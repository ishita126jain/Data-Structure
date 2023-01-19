class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans=0;
        int n= nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]<nums[i+1]){
                continue;
            }
            else{
                int temp = nums[i]-nums[i+1];
                ans = ans+temp+1;
                nums[i+1] += temp+1;
            }
        }
        return ans;
    }
};
