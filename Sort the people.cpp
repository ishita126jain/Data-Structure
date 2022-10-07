class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string> m;
        vector<string> v;
        int i=0;
        int n=names.size();
        while(n--){
             m.insert({heights[i], names[i] });
            i++;
        }
       map<int, string>::reverse_iterator it;
  
      for (it = m.rbegin(); it != m.rend(); it++) {
        v.push_back(it->second);
    }
        return v;
    }
};
