class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        string temp=a;
        while(temp.size()<b.size()){
            temp += a;
        }
        if(temp.find(b)!=string::npos){
            return temp.size()/a.size();
        }
        temp += a;
        if(temp.find(b)!=string::npos){
            return temp.size()/a.size();
        }
        return -1;
    }
};
