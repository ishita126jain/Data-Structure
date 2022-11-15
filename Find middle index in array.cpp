class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        long long right_sum=0;
        long long left_sum=0;

        for(int i=0;i<n;i++){
            right_sum+=nums[i];
        }
        for(int i=0;i<n;i++){
            left_sum+=nums[i];
            //right_sum-=nums[i];
            
            int a= left_sum-nums[i];
            int b=right_sum-nums[i];
            //cout<<a<<" "<<b<<" ";
            if(a==b){
                return i;
            }
            right_sum=b;
        }
        return -1;
    }
