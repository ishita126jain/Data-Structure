class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count=0;
        for(auto value:words){
            if(value.find(pref)==0){
                count++;
            }
        }
        return count; 
    }
};
