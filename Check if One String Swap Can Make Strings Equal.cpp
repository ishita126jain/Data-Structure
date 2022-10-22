class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n=s1.size();
        string str1=s1;
        if(s1==s2){
            return true;
        }
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                
                swap(s1[i],s1[j]);
                if(s1==s2){
                    return true;
                }
                 s1=str1;
            }
           
           
        }
        return false;
    }
};
