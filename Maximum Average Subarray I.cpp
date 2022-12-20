class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int s=0,e=0;
        double sum=0,max_sum=0;
        for(e=0;e<k;e++){
            max_sum+=nums[e];
        }
        sum=max_sum;
        while(e<nums.size()){
            sum=sum+nums[e++]-nums[s++];
            if(sum>max_sum){
                max_sum=sum;
            }
        }
        return max_sum/k;
    }
};
