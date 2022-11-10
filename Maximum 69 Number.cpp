class Solution {
public:
    int maximum69Number (int num) {
        string str;
        str=to_string(num);
        vector<int> v;
        v.push_back(num);
        for(int i=0;i<str.length();i++){
            string s=str;
            if(s[i]=='9'){
                s[i]='6';
            }
            else{
                s[i]='9';
            }
            int a=stoi(s);
            v.push_back(a);
        }
        int maxele=INT_MIN;
        for(int i=0;i<v.size();i++){
           if(v[i]>maxele){
               maxele=v[i];
           }
        }
        return maxele;
    }
};
