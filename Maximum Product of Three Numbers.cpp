class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i = nums.size();
        int a = nums[i-1]*nums[i-2]*nums[i-3];
        int b = nums[i-1]*nums[0]*nums[1];
        return max(a,b);
    }
};
