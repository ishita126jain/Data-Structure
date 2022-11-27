class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int> ans;
        vector<int> v;
        vector<int> :: iterator it,ls;
            for(int i=0;i<nums[0].size();i++){
                v.push_back(nums[0][i]);
            }
            for(it=v.begin();it!=v.end();it++){
                int flag=0;
                for(int i=1;i<nums.size();i++){
                    ls= find(nums[i].begin(),nums[i].end(),*it);
                        if(ls!=nums[i].end()){
                        flag=0;
                    }
                    else{
                        flag=1;
                        break;
                    }
                  
                }
                if(flag==0){
                    ans.push_back(*it);
                }
            }
            sort(ans.begin(),ans.end());
        return ans;
    }
};
