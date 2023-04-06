class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n=arr.size();
        if(n<3){
            return false;
        }
        int i=0;
        for(i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                break;
            }
            if(arr[i]==arr[i+1]){
                return false;
            }
        }
        cout<<i;
        if(i==n-1 || i==0){
            return false;
        }
        for(int j=i;j<n-1;j++){
            if(arr[j]<=arr[j+1]){
                return false;
            }
        }
        return true;
    }
};
