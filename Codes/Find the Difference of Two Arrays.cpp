class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans;
        unordered_set<int> s1,s2;
        unordered_set<int> :: iterator it;
        vector<int> ans1;
        vector<int> ans2;
        for(int i=0;i<nums1.size();i++){
            s1.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            s2.insert(nums2[i]);
        }
        for(auto it=s1.begin();it!=s1.end();it++){
            if(s2.count(*it)!=1){
                ans1.push_back(*it);
            }
        }
        for(auto it=s2.begin();it!=s2.end();it++){
            if(s1.count(*it)!=1){
                ans2.push_back(*it);
            }
        }
        ans.push_back(ans1);
        ans.push_back(ans2);
        return ans;
    }
};
