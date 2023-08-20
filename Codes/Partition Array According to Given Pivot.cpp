class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        queue<int> left,right,equal;
        for(auto value:nums){
            if(value<pivot){
                left.push(value);
            }
            else if(value>pivot){
                right.push(value);
            }
            else if(value==pivot){
                equal.push(value);
            }
        }
        vector<int> ans;
        while(!left.empty()){
            ans.push_back(left.front());
            left.pop();
        }
        while(!equal.empty()){
            ans.push_back(equal.front());
            equal.pop();
        }
        while(!right.empty()){
            ans.push_back(right.front());
            right.pop();
        }
        return ans;
    }
};
