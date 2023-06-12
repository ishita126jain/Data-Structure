class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int> m;
        int ans;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int maxi = -1;
        for(auto i:m){
            if(i.first%2==0){
                if(maxi<i.second){
                    maxi=i.second;
                    ans=i.first;
                }
            }
        }
        if(maxi==-1){
            return -1;
        }
        return ans;
    }
};
