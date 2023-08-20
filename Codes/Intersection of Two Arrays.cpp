class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s1,s2;
        unordered_set<int>::iterator it;
        for(int i=0;i<nums1.size();i++){
            s1.insert(nums1[i]);
        } 
        for(int i=0;i<nums2.size();i++){
            s2.insert(nums2[i]);
        } 
        vector<int> ans;
        for(auto it=s1.begin();it!=s1.end();it++){
            if(s2.count(*it)==1){
                ans.push_back(*it);
            }
        }
        

        return ans;
    }
};
