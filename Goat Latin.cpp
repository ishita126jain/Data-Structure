class Solution {
public:
    string toGoatLatin(string sentence) {
        string ans;
        stringstream s(sentence);
        string word;
        int n=1;
        while(s>>word){
             string temp;
            if(word[0]=='a'||word[0]=='e'||word[0]=='i'||word[0]=='o'||word[0]=='u'||word[0]=='A'||word[0]=='E'||word[0]=='I'||word[0]=='O'||word[0]=='U'){
                int temp_n=n;
                temp= temp+word;
                temp = temp+"ma";
                while(temp_n--){
                    temp.push_back('a');
                }
            }
            else{
                int temp_n=n;
                char a = word[0];
                word.erase(word.begin());
                temp = temp+word;
                temp.push_back(a);
                temp = temp + "ma";
                while(temp_n--){
                    temp.push_back('a');
                }
            }
            n++;
            ans = ans+temp+" ";
        }
        ans.pop_back();
        return ans;
    }
};
