class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        map<char,int> m,temp;
        map<char,vector<int>> dist;
        int ch=0;
        for(int i=0;i<distance.size();i++){
            m['a'+ch]=distance[i];
            ch++;
        }
        for(int i=0;i<s.size();i++){
            dist[s[i]].push_back(i);
        }
        for(auto value:dist){
            temp[value.first]=(value.second[1]-value.second[0])-1;
        }
        map<char,int>::iterator it1 = m.begin();
        map<char,int>::iterator it2 = temp.begin();
        while(it2!=temp.end()){
            if(it1->first==it2->second){
                if(it1->second==it2->second){
                    it1++;
                    it2++;
                }
                else{
                    return false;
                }
            }
            else{
                while(it1->first!=it2->first){
                    it1++;
                }
                 if(it1->second==it2->second){
                    it1++;
                    it2++;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};
