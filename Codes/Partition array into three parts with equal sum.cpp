class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int n=arr.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        if(sum%3!=0){
            return false;
        }
        int three_sum=sum/3;
        int temp_sum=0;
        int ans=0;
        
        for(int i=0;i<n;i++){
            temp_sum+=arr[i];
            if(temp_sum==three_sum){
                temp_sum=0;
                ans++;
            }
        }
        if(ans>=3){
            return true;
        }
        return false;
    }
};
