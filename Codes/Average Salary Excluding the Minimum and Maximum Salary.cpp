class Solution {
public:
    double average(vector<int>& salary) {
        int mini=INT_MAX,maxi=INT_MIN;
        int n=salary.size();
        double avg=0;
        for(int i=0;i<n;i++){
            mini=min(mini,salary[i]);
        }
          for(int i=0;i<n;i++){
            maxi=max(maxi,salary[i]);
        }
        double sum=0;
        for(int i=0;i<n;i++){
            if(salary[i]==mini || salary[i]==maxi){
                continue;
            }
            else{
                sum=sum+salary[i];
            }
        }
       
      avg=sum/(n-2);
        return avg;
    }
};
