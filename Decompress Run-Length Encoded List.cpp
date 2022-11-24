class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<pair<int,int>> vp;
        pair<int,int> p;
        int n=nums.size();
        int i=0;
        while(i!=n){
            p=make_pair(nums[i],nums[i+1]);
            vp.push_back(p);
            i=i+2;
        }
        vector<int> ans;
        for(int i=0;i<vp.size();i++){
            while(vp[i].first--){
                ans.push_back(vp[i].second);
            }
        }
        return ans;
    }
};
