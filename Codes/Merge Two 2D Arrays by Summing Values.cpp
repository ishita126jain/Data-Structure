class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        map<int,int> m;
        for(int i=0;i<nums1.size();i++){
            m[nums1[i][0]] = 0;
        }
        for(int i=0;i<nums2.size();i++){
            m[nums2[i][0]] = 0;
        }
        for(int i=0;i<nums1.size();i++){
             m[nums1[i][0]] += nums1[i][1];
        }
        for(int i=0;i<nums2.size();i++){
             m[nums2[i][0]] += nums2[i][1];
        }
         vector<vector<int>> v;
         for(auto i:m){
             vector<int> temp;
             temp.push_back(i.first);
             temp.push_back(i.second);
             v.push_back(temp);
         }
         return v;
    }
};
