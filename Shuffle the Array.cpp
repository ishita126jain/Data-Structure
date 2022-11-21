class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> a;
        vector<int> b;
        for(int i=0;i<n;i++){
            a.push_back(nums[i]);
        }
        for(int i=n;i<nums.size();i++){
            b.push_back(nums[i]);
        }
        vector<int> ans;
        int i=0;
        while(n--){
            ans.push_back(a[i]);
            ans.push_back(b[i]);
            i++;
        }
        return ans;
    }
};
