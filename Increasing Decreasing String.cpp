class Solution {
public:
    string sortString(string s) {
        map<char,int> m;
        set<char> st;
        for(int i=0;i<s.size();i++){
            st.insert(s[i]);
            m[s[i]]++;
        }
        string ans="", temp="";
        for(auto i:st){
            temp.push_back(i);
        }
        while(ans.size()<s.size()){
            for(int i=0;i<temp.size();i++){
                if(m[temp[i]]>0){
                    ans += temp[i];
                    m[temp[i]]--;
                }
            }
            for(int i=temp.size()-1;i>=0;i--){
               if(m[temp[i]]>0){
                    ans += temp[i];
                    m[temp[i]]--;
                }
            }
        }
        
       
        return ans;
    }
};
