class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int ans=0;
        int n=arr.size();
        for(int i=1;i<n-1;){
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                int count=1;
                int j=i;
                while(j>0 && arr[j]>arr[j-1]){
                    j--;
                    count++;
                }
                while(i<n-1 && arr[i]>arr[i+1]){
                    i++;
                    count++;
                }
                ans=max(ans,count);
            }
            else{
                i++;
            }
            
        }
        return ans;
    }
};
