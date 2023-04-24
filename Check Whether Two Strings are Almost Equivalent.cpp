class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        map<char,int> m1;
        map<char,int> m2;
        for(int i=97;i<=122;i++){
            m1[i]=0;
        }
        for(int i=97;i<=122;i++){
            m2[i]=0;
        }
        for(int i=0;i<word1.size();i++){
            m1[word1[i]]++;
        }
        for(int i=0;i<word2.size();i++){
            m2[word2[i]]++;
        }
        map<char,int> :: iterator it1=m1.begin();
        map<char,int> :: iterator it2=m2.begin();

        while(it1!=m1.end()&&it2!=m2.end()){
            if(abs(it1->second - it2->second) > 3){
                return false;
            }
            it1++;
            it2++;
        } 
        return true;       
    }
};
