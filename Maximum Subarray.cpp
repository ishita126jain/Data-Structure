class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxsum=INT_MIN;
        int maxi=INT_MIN;
      
        auto res=all_of(nums.begin(),nums.end(),[](int x){return x<0;});
        
        if(res==true){
            for(int i=0;i<nums.size();i++){
                maxi=max(maxi,nums[i]);
            }
           return maxi;
        }
        else{
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            if(sum<0){
                sum=0;
            }
            maxsum=max(maxsum,sum);
        }
        return maxsum;
        }
    }
};
