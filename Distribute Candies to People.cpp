class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> ans(num_people,0);
        int j=0;
        int k=1;
       while(candies>0){
           ans[j] += k;
           candies = candies-k;
           j++;
           k++;
           if(k>candies){
               k=candies;
           }
           if(j==num_people){
               j=0;
           }
       }
        return ans;
    }
};
