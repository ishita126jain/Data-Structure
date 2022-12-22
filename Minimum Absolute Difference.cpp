class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int mn=INT_MAX;
        for(int i=0;i<arr.size()-1;i++){
            mn=min(mn,abs(arr[i]-arr[i+1]));
        }
        vector<vector<int>> v;
        for(int i=0;i<arr.size()-1;i++){
            vector<int> temp;
            if(abs(arr[i]-arr[i+1])==mn){
                temp.push_back(arr[i]);
                temp.push_back(arr[i+1]);
            }
            if(temp.size()!=0)
            v.push_back(temp);
        }
        return v;
    }
};
