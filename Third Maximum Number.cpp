class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<int> s;
        for(auto value:nums){
            s.insert(value);
        }
        for(auto value:s){
            cout<<value<<" ";
        }
        if(s.size()<3){
            return *max_element(s.begin(),s.end());
        }
        set<int> :: iterator it=s.end();
        for(int i=0;i<3;i++){
            it--;
        }
        return *it;
    }
};
