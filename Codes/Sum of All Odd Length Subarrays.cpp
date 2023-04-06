class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
     
        
        int ans=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            
            for(int j=i;j<n;j++){
                vector<int> v;
                for(int k=i;k<=j;k++){
                     v.push_back(arr[k]);
                        
                }
                int m=v.size();
                if(m%2!=0){
                    for(int i=0;i<m;i++){
                        ans=ans+v[i];
                    }
                }
              
            }
            
           
        }
      
        return ans;
    }
};
