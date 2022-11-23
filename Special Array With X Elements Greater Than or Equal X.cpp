class Solution {
public:
    int specialArray(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int s=1;
        int e=n;
        while(s<=e){
            int mid=(e-s)/2+s;
            int count=0;
            for(int i=0;i<n;i++){
                if(nums[i]>=mid)
                count++;
            }
            if(mid==count){
               return mid;
            }
            else if(count<mid){
                e=mid-1;
            }
            else {
                s=mid+1;
            }
        }
       
        return -1;
    }
};
