class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        int sum1=0,sum2=0;
        vector<int> ans;
        map<int,int> mp;
        for(auto value:aliceSizes){
            sum1 += value;
        }
        for(int i=0;i<bobSizes.size();i++){
            sum2 += bobSizes[i];
            mp[bobSizes[i]]=i;
        }
        int temp = (sum1-sum2)/2;
        for(int i=0;i<aliceSizes.size();i++){
            if(mp.count(aliceSizes[i]-temp)){
                ans.push_back(aliceSizes[i]);
                ans.push_back(aliceSizes[i]-temp);
                break;
            }
        }
        
        return ans;
    }
};
