class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int ans=0;
        for(int i=0;i<s.size();){
            int count0=0;
            int count1=0;
            while(i<s.size() && s[i]=='0'){
                count0++;
                i++;
            }
            while(i<s.size()&& s[i]=='1' && count1<count0){
                count1++;
                i++;
                ans = max(ans,count1*2);
            }
            while(i<s.size() && s[i]=='1'){
                i++;
            }
        }
        return ans;
    }
};
