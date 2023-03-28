class Solution {
public:
    vector<int> leftRigthDifference(vector<int>& nums) {
        vector<int> answer,leftsum,rightsum;
        leftsum.push_back(0);
        for(int i=0;i<nums.size()-1;i++){
            leftsum.push_back(nums[i]+leftsum[i]);
        }
        rightsum.push_back(0);
        int j=0;
        for(int i=nums.size()-1;i>0;i--){
            rightsum.push_back(nums[i]+rightsum[j]);
            j++;
        }
        reverse(rightsum.begin(),rightsum.end());
        for(int i=0;i<nums.size();i++){
            answer.push_back(abs(leftsum[i]-rightsum[i]));
        }
        return answer;
    }
};
