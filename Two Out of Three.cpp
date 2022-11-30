class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int> ans;
        set<int> s;
        for(int i=0;i<nums1.size();i++){
           s.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
           s.insert(nums2[i]);
        }
        for(int i=0;i<nums3.size();i++){
           s.insert(nums3[i]);
        }
        for(auto value:s){
            auto it1= find(nums1.begin(),nums1.end(),value);
            auto it2= find(nums2.begin(),nums2.end(),value);
            auto it3= find(nums3.begin(),nums3.end(),value);
            
            if((it1!=nums1.end() && it2!=nums2.end()) || (it2!=nums2.end() && it3!=nums3.end())||(it1!=nums1.end() && it3!=nums3.end())){
                ans.push_back(value);
            }

        }
        return ans;
    }
};
