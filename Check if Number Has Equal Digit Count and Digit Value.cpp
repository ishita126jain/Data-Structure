class Solution {
public:
    bool digitCount(string num) {
        vector<int> v(10,0);
        for(int i=0;i<num.size();i++){
            v[num[i]-48]++;
        }
        for(int i=0;i<num.size();i++){
            if(num[i]!=v[i]+48){
                return false;
            }
        }
        return true;
    }
};
