class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector <int> v;
        for(int i=0;i<nums.size();i++){
           
            if(nums[i]!=0){
              
                v.push_back(nums[i]);
            }
        }
        int l=nums.size()-v.size();
       while(l--){
            v.push_back(0);
        }
        
        nums.clear();
        for(int i=0;i<v.size();i++){
            nums.push_back(v[i]);
        }
    }
};
