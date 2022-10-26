class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        int count=0;
        int max_count=0;
        vector<int> vv;
        vector<int> v;
        for(int i=0;i<arr.size();i++){
            int n=arr[i];
            count=0;
            while(n!=0){
                if(n&1){
                    count=count+1;
                }
                n=n>>1;
            }
            max_count=max(max_count,count);
        }
        
            int i=0;
            while(i<=max_count){
                   v.clear();
                for(int j=0;j<arr.size();j++){
                 
                    int cnt=0;
                    int n=arr[j];
                    while(n!=0){
                        if(n&1){
                            cnt++;
                        }
                        n=n>>1;
                    }
                    if(cnt==i){
                        v.push_back(arr[j]);
                    }
                }
              
                sort(v.begin(),v.end());
                for(auto value:v){
                    vv.push_back(value);
                }
                i++;
            }
        
        return vv;
    }
};
