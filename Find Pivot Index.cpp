class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
             int leftsum=0;
             int rightsum=0;
            for(int j=0;j<i;j++){
                leftsum=leftsum+nums[j];
            }
             for(int j=i+1;j<n;j++){
                rightsum=rightsum+nums[j];
            }
            if(leftsum==rightsum){
                return i;
            }
        }
        return -1;
    }
};
