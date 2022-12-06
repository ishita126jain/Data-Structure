class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> str;
       char start = s[1];
       char end = s[4];
       char st = s[0];
       char en = s[3];
       while(st<=en){
           start = s[1];
           end = s[4];
           string temp="";
           while( start<=end){
               temp="";
               temp.push_back(st);
               temp.push_back(start);
               start++;
               str.push_back(temp);
           }
           
           st++;
       }
       return str;
    }
};
