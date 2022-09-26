class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> v1;
        vector<int> v2;
        
        for(int i=0;i<m;i++){
            v1.push_back(nums1[i]);
        }
        for(int i=0;i<n;i++){
            v2.push_back(nums2[i]);
        }
       std:: merge(v1.begin(),v1.end(),v2.begin(),v2.end(),nums1.begin());
        sort(nums1.begin(),nums1.end());
    }
};
