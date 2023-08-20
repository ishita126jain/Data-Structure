class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
           vector<int> v;
        map<int,int> m1;
        map<int,int> m2;
        
        for(int i=0;i<nums1.size();i++){
            m1[nums1[i]]++;
        }
        
        for(int i=0;i<nums2.size();i++){
            m2[nums2[i]]++;
        }
        
       
        
        if(nums1.size()<=nums2.size()){
            for(int i=0;i<nums1.size();i++){
                if(m2.find(nums1[i])!=m2.end() && m2[nums1[i]]!=0){
                   v.push_back(nums1[i]);
                    m2[nums1[i]]--;
                }
                continue;
              
            }
        }
        else{
            for(int i=0;i<nums2.size();i++){
                if(m1.find(nums2[i])!=m1.end() && m1[nums2[i]]!=0){
                   v.push_back(nums2[i]);
                    m1[nums2[i]]--;
                }
                continue;
              
            }
        }
        return v;
    }
};
