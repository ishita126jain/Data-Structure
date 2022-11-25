class Solution {
public:
    bool checkZeroOnes(string s) {
        int one=0,zero=0,max_one=0,max_zero=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                one++;
                zero=0;
            }
            else{
                zero++;
                one=0;
            }
            max_one=max(one,max_one);
            max_zero=max(zero,max_zero);
        }
        if(max_one>max_zero){
            return true;
        }
        return false;
    }
};
