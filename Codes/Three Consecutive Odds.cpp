class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int n=arr.size();
        int count=0;
        for(int i=0;i<n-1;i++){
           
            if(arr[i]%2==0){
                
                continue;
            }
           
            else if(arr[i]%2!=0 && arr[i+1]%2!=0){
                count=count+2;
                if(count==4){
                return true;
            }
            }
            else if(arr[i]%2!=0 && arr[i+1]%2==0){
              
                count=0;
            }
            
        }
    return false;
    }
};
