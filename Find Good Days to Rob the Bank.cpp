class Solution {
public:
    vector<int> goodDaysToRobBank(vector<int>& security, int time) {
//         vector<int> v;
//         int n=security.size();
//         int flag1=0,flag2=0;
//         int k=time;
//         for(int i=k;i<n-k;){
//             for(int j=i;j>i-k;j--){
//                 if(security[j]<=security[j-1]){
//                     flag1=0;
//                 }
//                 else{
//                     flag1=1;
//                     break;
//                 }
//             }
//             int a=i;
//             for(int j=a;j<a+k;j++){
//                 if(security[j]<=security[j+1]){
//                     flag2=0;
//                 }
//                 else{
//                     flag2=1;
//                     break;
//                 }
               
//             }
//             if(flag1==0 && flag2==0){
//                 v.push_back(i);
//                 i++;
//             }
//             else{
//                 i++;
//             }
            
//         }
//         return v;
        
         int n = security.size();
        if (n <= time * 2) return {};
        vector<int> left(n);
        vector<int> right(n);
        for (int i = 1; i < n; ++i)
            if (security[i] <= security[i - 1])
                left[i] = left[i - 1] + 1;
        for (int i = n - 2; i >= 0; --i)
            if (security[i] <= security[i + 1])
                right[i] = right[i + 1] + 1;
        vector<int> ans;
        for (int i = time; i < n - time; ++i)
            if (time <= min(left[i], right[i]))
                ans.push_back(i);
        return ans;
          
    }
};
