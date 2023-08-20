class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int i=0;
        while(i!=n){
            if(nums[i]!=i){
                return i;
            }
            i++;
        }
        return n;
    }
};
