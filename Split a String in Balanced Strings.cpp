class Solution {
public:
    int balancedStringSplit(string s) {
        int n=s.size();
        int count_R=0;
        int count_L=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='R'){
                count_R++;
            }
             if(s[i]=='L'){
                count_L++;
            }
            if(count_R==count_L){
                count++;
                count_R=0;
                count_L=0;
            }
        }
        return count;
    }
};
