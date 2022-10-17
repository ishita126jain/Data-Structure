class Solution {
public:
    bool hasAlternatingBits(int n) {
        vector<int> v;
        int i=0;
        while(n!=0){
            if((n&(1<<i))==0){
                v.push_back(0);
            }
            else{
                v.push_back(1);
            }
           
            n=n>>1;
        }
        for(int i=0;i<v.size()-1;i++){
           if(v[i]==v[i+1]){
               return false;
           }
        }
        return true;
    }
};
