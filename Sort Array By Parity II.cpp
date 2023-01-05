class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> even,odd;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
        }
        vector<int> ans;
        int j=0,k=0;
        while(j<even.size() && k<odd.size()){
            ans.push_back(even[j]);
            ans.push_back(odd[k]);
            j++;
            k++;
        }
        return ans;
    }
};
