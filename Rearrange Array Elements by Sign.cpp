class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos,neg;
        for(auto value:nums){
            if(value<0){
                neg.push_back(value);
            }
            else{
                pos.push_back(value);
            }
        }
        vector<int> ans;
        int i=0,j=0;
        while( i<pos.size() && j<neg.size()){
            ans.push_back(pos[i]);
            ans.push_back(neg[j]);
            i++;
            j++;
        }
        return ans;
    }
};
