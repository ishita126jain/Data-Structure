class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int one=0;
       int max_one=0;
       for(int i=0;i<nums.size();i++){
           if(nums[i]==1){
               one++;
           }
           else{
               one=0;
           }
           max_one=max(max_one,one);
       } 
       return max_one;
    }
};
