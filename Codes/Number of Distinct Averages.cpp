class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        int n = nums.size();
        set<double> s;
        sort(nums.begin(),nums.end());
        int start = 0, end = n-1;
        for(int i=0;i<n;i++){
            double avg = (nums[start]+nums[end])/2.0;
            start++;
            end--;
            s.insert(avg);
        }
        return s.size();
    }
};
