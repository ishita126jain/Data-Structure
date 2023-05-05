class Solution {
public:
    int strStr(string haystack, string needle) {
        int ans;
        if(haystack.find(needle)==string::npos){
            return -1;
        }
        else{
           ans = haystack.find(needle); 
        }
        return ans;
    }
};
