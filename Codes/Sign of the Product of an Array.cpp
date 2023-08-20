class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n=nums.size();
      //  int countp=0;
        int countn=0;
        int countz=0;
        for(int i=0;i<n;i++){
            // if(nums[i]>0){
            //     countp++;
            // }
         if(nums[i]<0){
                countn++;
            }
            else if(nums[i]==0){
                return 0;
            }
        }
        if(countn%2==0){
            return 1;
        }
     if(countn%2!=0){
         return -1;
     }
        return 0;
    }
};
