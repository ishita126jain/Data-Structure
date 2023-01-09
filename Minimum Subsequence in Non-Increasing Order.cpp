class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
       int n=nums.size();
       sort(nums.begin(),nums.end());
       int sum=0;
       for(int i=0;i<n;i++){
           sum += nums[i];
       } 
       int temp=0;
       int j;
       for(int i=n-1;i>=0;i--){
           sum -= nums[i];
           temp += nums[i];
           if(sum < temp){
               j=i;
               break;
           }
       }
       vector<int> ans;
       for(int i=n-1;i>=j;i--){
           ans.push_back(nums[i]);
       }
       return ans;
    }
};
