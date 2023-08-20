class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
       vector<int> ans;
       map<int,int> m;
       for(int i=0;i<arr1.size();i++){
           m[arr1[i]]++;
       }
       for(auto i:arr2){
           if(m.find(i)!=m.end()){
               while(m[i]--){
                   ans.push_back(i);
               }
           }
           m.erase(i);
       }
       for(auto i:m){
           while(i.second--){
               ans.push_back(i.first);
           }
           m.erase(i.first);
       }
       return ans;
    }
};
