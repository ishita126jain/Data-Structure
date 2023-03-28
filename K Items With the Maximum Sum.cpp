class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        vector<int> temp;

        for(int i=0;i<numOnes;i++){
            temp.push_back(1);
        }
        for(int i=0;i<numZeros;i++){
            temp.push_back(0);
        }
        for(int i=0;i<numNegOnes;i++){
            temp.push_back(-1);
        }
        int ans=0;
        for(int i=0;i<k;i++){
            ans = ans+temp[i];
        }
        return ans;
    }
};
