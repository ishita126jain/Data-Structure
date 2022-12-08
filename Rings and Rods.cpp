class Solution {
public:
    int countPoints(string rings) {
        map<int,vector<char>> mp;
        int ans=0;
        for(int i=1;i<rings.size();i=i+2){
            vector<char> v;
                for(int j=1;j<rings.size();j=j+2){
                    if(rings[j]==rings[i]){
                        v.push_back(rings[j-1]);
                    }
                }
            mp[rings[i]-48]=v;
        }
        for(auto value:mp){
            cout<<value.first<<" ";
            for(auto val:value.second){
                cout<<val;
            }
            cout<<endl;
        }
        
        for(auto value:mp){
            vector<char> :: iterator it1,it2,it3;
            it1=find(value.second.begin(),value.second.end(),'B');
            it2=find(value.second.begin(),value.second.end(),'G');
            it3=find(value.second.begin(),value.second.end(),'R');
           if(it1!=value.second.end()&&
            it2!=value.second.end()&&
            it3!=value.second.end()) {
                ans++;
            }
            
        }
        return ans;
    }
};
