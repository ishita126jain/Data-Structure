class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        for(int i=1;i<words.size();i++){
            string temp1=words[i];
            sort(temp1.begin(),temp1.end());

            string temp2=words[i-1];
            sort(temp2.begin(),temp2.end());

            if(temp1==temp2){
                words.erase(words.begin()+i);
                i--;
            }

        }
        return words;
    }
};
