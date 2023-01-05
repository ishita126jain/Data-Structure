class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> even,odd;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                even.push_back(nums[i]);
            }
            else{
                odd.push_back(nums[i]);
            }
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end(), greater<int>());
        vector<int> ans;
        int i=0,j=0;
        if(even.size()>odd.size()){
            while(i<even.size() && j<odd.size() ){
            ans.push_back(even[i]);
            ans.push_back(odd[j]);
            i++;j++;
        }
        ans.push_back(even[i]);
        }
       else{
            while(i<even.size() && j<odd.size()){
            ans.push_back(even[i]);
            ans.push_back(odd[j]);
            i++;j++;
        }
        }
       
        return ans;
    }
};
