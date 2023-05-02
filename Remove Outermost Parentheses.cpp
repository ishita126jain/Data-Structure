class Solution {
public:
    string removeOuterParentheses(string s) {
      int temp=0;
      string ans="";
      for(auto i:s){
          if(i=='('){
              if(temp>0){
                  ans += '(';
              }
              temp++;
          }
          else if(i==')'){
              if(temp>1){
                  ans += ')';
              }
              temp--;
          }
      }
        return ans;
    }
};
