class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int temp = arr.size()/4;
        map<int,int> m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        for(auto i:m){
            if(i.second > temp){
                return i.first;
            }
        }
        return -1;
    }
};
