class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> v;
        v.push_back(0);
        for(int i=0;i<gain.size();i++){
            int temp = v[i]+gain[i];
            v.push_back(temp);
        }
        int mx = 0;
        for(auto value:v){
            mx=max(mx,value);
        }
        
        return mx;
    }
};
