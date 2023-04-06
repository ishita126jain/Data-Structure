class Solution {
public:
    bool checkIfPangram(string sentence) {
        map<char,int> mp1,mp2;

        for(int i=0;i<26;i++){
            mp1['a'+i]=1;
        }
        for(int i=0;i<sentence.size();i++){
            mp2[sentence[i]]=1;
        }
        if(mp1==mp2){
            return true;
        }
        return false;
    }
};
