class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> m;
        int ans=0;
        for(int i=0;i<tasks.size();i++){
           m[tasks[i]]++;
        }
        
        for(auto value:m){
            if(value.second==1){
                return -1;
            }
            else{
                ans=ans+(value.second+2)/3;
            }
        }
       
       return ans; 
    }
};
