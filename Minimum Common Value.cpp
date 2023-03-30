class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        set<int> s;
        for(int i=0;i<nums1.size();i++){
            s.insert(nums1[i]);
        }
        for(int j=0;j<nums2.size();j++){
            if(s.find(nums2[j]) != s.end()){
                return nums2[j];
            }
        }
        
        return -1;
    }
};
