class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int temp=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]-temp==0){
                continue;
            }
            else{
                temp+=nums[i]-temp;
                count++;
            }
        }
        return count;
    }
};
