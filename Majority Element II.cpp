class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n= nums.size();
        int temp = floor(n/3);
        vector<int> ans;
        map<int,int> m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        for(auto i:m){
            if(i.second > temp){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};
