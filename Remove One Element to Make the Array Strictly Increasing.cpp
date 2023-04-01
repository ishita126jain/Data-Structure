class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        int count1=0,count2=0;
        int n = nums.size();
        int maxi=nums[0];
        int mini=nums[n-1];
        for(int i=1;i<n;i++){
            if(maxi>=nums[i]){
                count1++;
            }
            maxi = max(maxi,nums[i]);
        }
         for(int i=n-2;i>=0;i--){
            if(mini<=nums[i]){
                count2++;
            }
            mini = min(mini,nums[i]);
        }
        if(count1==0||count1==1||count2==0||count2==1){
            return true;
        }
        return false;
    }
};
