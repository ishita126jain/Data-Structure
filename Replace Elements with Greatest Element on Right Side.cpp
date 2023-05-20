class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> temp;
        for(int i=1;i<arr.size();i++){
            int maxi = *max_element(arr.begin()+i, arr.end());
            temp.push_back(maxi);
        }
        temp.push_back(-1);
        return temp;
    }
};
