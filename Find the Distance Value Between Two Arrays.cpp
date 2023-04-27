class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count = 0;
        sort(arr2.begin(),arr2.end());

        for(int i=0;i<arr1.size();i++){
            int flag=0;
            for(int j=0;j<arr2.size();j++){
                if(abs(arr1[i]-arr2[j]) > d){
                    flag=1;
                    
                }
                else{
                    flag=0;
                    break;
                }
            }
            if(flag==1){
                count++;
            }
        }
        return count;
    }
};
