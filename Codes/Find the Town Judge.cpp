class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> v(n+1,0);
         vector<int> vv(n+1,0);
         if(n==1 && trust.empty()){
             return 1;
         }

        for(auto value:trust){
            v[value[1]]++;
            vv[value[0]]++; 
        }

        for(int i=0;i<=n;i++){
            if(vv[i]==0 && v[i]==(n-1)){
                return i;
            }
        }
        return -1;
    }
};
