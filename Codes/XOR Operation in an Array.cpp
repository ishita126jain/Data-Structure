class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> nums;
        for(int i=0;i<n;i++){
            nums.push_back(start+(2*i));
        }
        int ans=0;
        for(auto value:nums){
            ans=ans^value;
        }
        return ans;
    }
};
