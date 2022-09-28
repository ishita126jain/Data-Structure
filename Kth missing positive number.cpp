class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> v;
        int n=arr.size();
        int i=0;
        int j=1;
        int a=n+k;
        int ar[a];
        for(int i=0;i<n;i++){
            ar[i]=arr[i];
        }
        for(int i=n;i<a;i++){
            ar[i]=-1;
        }
      while(a--){
          if(ar[i]!=j){
              v.push_back(j);
                j++;
          }
          else{
              i++;
              j++;
          }
      }
        
        return v[k-1];
        
        
    }
};
