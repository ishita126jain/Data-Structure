class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> v;
        vector<int> vec;
        
        for(int i=0;i<pow(2,nums.size());i++){
           vec.clear();
           for(int j=0;j<nums.size();j++){
               if((i&(1<<j))!=0){
                    vec.push_back(nums[j]);
               }
            }
            v.push_back(vec);
        }
        return v;
    }
};
