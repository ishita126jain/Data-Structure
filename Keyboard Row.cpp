class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_set<char> row1{'q','w','e','r','t','y','u','i','o','p'};
        unordered_set<char> row2{'a','s','d','f','g','h','j','k','l'};
        unordered_set<char> row3{'z','x','c','v','b','n','m'};
        vector<string> ans;
        for(auto word:words){
            int r1=0,r2=0,r3=0;
            for(auto ch:word){
                char a=tolower(ch);
                if(row1.find(a)!=row1.end()){
                    r1++;
                }
                else if(row2.find(a)!=row2.end()){
                    r2++;
                }
                else if(row3.find(a)!=row3.end()){
                    r3++;
                }
            }
            if(r1+r2==0 || r2+r3==0 || r3+r1==0){
                ans.push_back(word);
            }

        }
        return ans;
    }
};
