class Solution {
public:
    string truncateSentence(string s, int k) {
        stringstream str(s);
        string word;
        string ans;
        int i=0;
        while(str>>word){
            if(i==k){
                break;
            }
            else{
                if(i<k-1)
                ans+=word+" ";
                else
                ans+=word;
            }
            i++;
        }
        return ans;
    }
};
