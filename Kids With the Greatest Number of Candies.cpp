class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        vector<bool> ans;
        int max_ele=0;
        for(int i=0;i<n;i++){
            max_ele = max(max_ele,candies[i]);
        }
        for(int i=0;i<n;i++){
            if(candies[i]+extraCandies < max_ele){
                ans.push_back(false);
            }
            else{
                ans.push_back(true);
            }
        }
        return ans;
    }
};
