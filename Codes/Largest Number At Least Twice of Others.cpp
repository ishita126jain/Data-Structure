class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int> temp=nums;
       sort(temp.begin(),temp.end());
       int n=temp.size();
       for(int i=0;i<temp.size()-1;i++){
           if(temp[i]*2>temp[n-1]){
               return -1;
           }
       }
       for(int i=0;i<nums.size();i++){
           if(nums[i]==temp[n-1]){
               return i;
           }
       }
       return -1;
    }
};
