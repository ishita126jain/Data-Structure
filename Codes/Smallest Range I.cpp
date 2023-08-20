class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int maxe=INT_MIN,mine=INT_MAX;
        for(int i=0;i<nums.size();i++){
            maxe=max(maxe,nums[i]);
        }
        
         for(int i=0;i<nums.size();i++){
            mine=min(mine,nums[i]);
        }
        int temp=(maxe-k)-(mine+k);
        return max(0,temp);
    }
};
