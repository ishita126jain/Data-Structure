class Solution {
public:
    int similarPairs(vector<string>& words) {
        vector<set<char>> vs;
        for(int i=0;i<words.size();i++){
            set<char> temp;
            for(int j=0;j<words[i].size();j++){
                temp.insert(words[i][j]);
            }
            vs.push_back(temp);
        }

        vector<string> v;
        for(int i=0;i<vs.size();i++){
            string temp;
            for(auto j:vs[i]){
                temp.push_back(j);
            }
            v.push_back(temp);
        }
        int count=0;
        for(int i=0;i<v.size();i++){
            for(int j=i+1;j<v.size();j++){
                if(v[i]==v[j]){
                    count++;
                }
            }
        }
        return count;
    }
};
