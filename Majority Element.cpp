class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        int ans; 
        int max_ans=INT_MIN;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto value:m){
           
            max_ans=max(max_ans,value.second);
             
        }
        for(auto value:m){
            if(value.second==max_ans){
                ans=value.first;
                break;
            }
        }
        return ans;
    }
};
