class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
       
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            v.push_back(abs(nums[i]));
        }
        int minn=INT_MAX;
        for(int i=0;i<v.size();i++){
            minn=min(minn,v[i]);
        }
        int ans=0;
         for(int i=0;i<nums.size();i++){
            if(abs(nums[i])==minn){
               ans=nums[i];
            }
             
           
        }
        for(int i=0;i<nums.size();i++){
            if(abs(nums[i])==minn){
                if(ans<nums[i]){
                     ans=nums[i];
                }
               
                 
            }
             
           
        }
       return ans;
    }
};
