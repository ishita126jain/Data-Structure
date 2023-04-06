class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int a;
        int b;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                a= nums[i];
            }
        }
        set<int> s;
        for(auto value:nums){
            s.insert(value);
        }
        int i=1;
        for(auto value:s){
            if(value!=i){
                b=i;
                break;
            }
            i++;
        }
        if(i==n){
            b=n;
        }
        ans.push_back(a);
        ans.push_back(b);
        return ans;
    }
};
