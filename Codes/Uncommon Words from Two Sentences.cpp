class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int> mp1,mp2;
        unordered_map<string,int> :: iterator it;
        stringstream str1(s1) ,str2(s2);
        string word;
        vector<string> ans;
        while(str1>>word){
            mp1[word]++;
        }

         while(str2>>word){
            mp2[word]++;
        }
        for(it= mp1.begin();it!=mp1.end();it++){
            if(it->second==1 && mp2.find(it->first)==mp2.end()){
                ans.push_back(it->first);
            }
        }
        for(it= mp2.begin();it!=mp2.end();it++){
            if(it->second==1 && mp1.find(it->first)==mp1.end()){
                ans.push_back(it->first);
            }
        }
        return ans;
    }
};
