class Solution {
public:
    int minimumMoves(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='X'){
                ans++;
                i=i+2;
            }
        }
        return ans;
    }
};
