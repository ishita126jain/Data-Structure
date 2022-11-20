class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        vector<char> v;
        for(int i=0;i<brokenLetters.size();i++){
            v.push_back(brokenLetters[i]);
        }

        stringstream s(text);
        string word;
        int count=0;
        int count1=0;
        while(s>>word){
            for(int i=0;i<word.size();i++){
                int flag=0;
                for(int j=0;j<v.size();j++){
                    if(word[i]==v[j]){
                        flag=1;
                        count1++;
                        break;
                    }
                }
                if(flag==1){
                    break;
                }

            }
            count++;
        }
        return count-count1;
    }
};
