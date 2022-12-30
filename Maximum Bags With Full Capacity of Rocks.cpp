class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        vector<int> temp;
        int count=0;
        int n=capacity.size();
        for(int i=0;i<n;i++){
            temp.push_back(capacity[i]-rocks[i]);
        }
        sort(temp.begin(),temp.end());
        for(auto value:temp){
            cout<<value<<" ";
        }
        for(int i=0;i<n;i++){
            if(temp[i]==0){
                count++;
            }
            else if(temp[i]<=additionalRocks ){
                count++;
                additionalRocks -= temp[i];
            }
        }
        return count;
    }
};
