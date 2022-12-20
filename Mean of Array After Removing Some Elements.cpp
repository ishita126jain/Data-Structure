class Solution {
public:
    double trimMean(vector<int>& arr) {
        int n=arr.size();
        double per= n*0.05;
        double mean=0;
        int sum=0;
        sort(arr.begin(),arr.end());
        for(int i=per;i<n-per;i++){
            sum+=arr[i];
        }
        mean=sum/(n-(per*2));
        return mean;
    }
};
