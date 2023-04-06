class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans="";
        while(columnNumber){
            ans.push_back('A'+(columnNumber-1)%26);
            columnNumber=(columnNumber-1)/26;
        }
     reverse(ans.begin(),ans.end());
     return ans;
    }
};
