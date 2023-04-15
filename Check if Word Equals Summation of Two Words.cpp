class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int a=0,b=0,c=0;
        for(int i=0;i<firstWord.size();i++){
            a = (a*10) + (97 - firstWord[i]); 
        }
        for(int i=0;i<secondWord.size();i++){
            b = (b*10) + (97 - secondWord[i]); 
        }
        for(int i=0;i<targetWord.size();i++){
            c = (c*10) + (97 - targetWord[i]); 
        }
        return (a+b) == c;
    }
};
