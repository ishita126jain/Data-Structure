class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> ans;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum = sum+nums[i];
            sum = sum*2;
            if(sum%5 == 0){
                sum=0;
                ans.push_back(true);
            }
            else{
                sum = sum%5;
                ans.push_back(false);
            }
        }
        return ans;
    }
};
