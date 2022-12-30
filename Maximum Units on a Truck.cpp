class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int n=boxTypes.size();
        multimap<int,int>m;
        for(int i=0;i<n;i++) {
            m.insert({boxTypes[i][1],boxTypes[i][0]});
        }
        int ans=0;
        for(auto i=m.rbegin();i!=m.rend();i++){
            if(i->second<=truckSize){
                ans+=i->first*i->second;
                truckSize-=i->second;
            }else{
                ans+=truckSize*i->first;
                break;
            }
        }
        return ans;
    }
};
