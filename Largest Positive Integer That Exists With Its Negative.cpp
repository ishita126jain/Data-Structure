class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int left = 0;
        int right = n-1;
        int maxi = -1;
        while(left<right){
            if(nums[left]*(-1) == nums[right]){
                maxi = max(maxi,nums[right]);
                left++;
                right--;
            }
            else if(nums[left]*(-1) > nums[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxi;
    }
};
