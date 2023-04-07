class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char>st(allowed.begin(),allowed.end());
        int count=0;
        for(int i=0;i<words.size();i++){
            string temp=words[i];
            bool flag=true;
            for(int j=0;j<temp.length();j++){
                if(st.find(temp[j])==st.end()){
                    flag=false;
                    break;
                }
            }
            if(flag)
            count++;
        }
        return count;
    }
};
