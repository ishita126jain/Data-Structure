class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> v;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                v.push_back(i);
            }
        }
        int m=v.size();
        for(int i=m-1;i>0;i--){
            int diff=v[i]-v[i-1];
            if((diff-1)<k){
                return false;
            }
        }
        return true;
    }
};
