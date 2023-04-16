class Solution {
public:
    int secondHighest(string s) {
        set<int> st;
        vector<int> v;
        for(int i=0;i<s.size();i++){
            if(s[i]>='0' && s[i]<='9'){
                int temp = s[i]-'0';
                st.insert(temp);
            }
        }
        if(st.size()<=1){
            return -1;
        }
        for(auto i:st){
            v.push_back(i);
        }
        sort(v.begin(),v.end());
        return v[v.size()-2];
    }
};
