class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elesum=0, digsum=0;
        vector<int> temp;
        for(int i=0;i<nums.size();i++){
            int n=nums[i];
            while(n!=0){
                int a = n %10;
                digsum = digsum+a;
                n=n/10;
            }
        }
        for(int i=0;i<nums.size();i++){
            elesum = nums[i]+ elesum;
        }
        return abs(elesum-digsum);
    }
};
