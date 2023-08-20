class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) {
        vector<int> v;
        v.push_back(releaseTimes[0]);
        int n= releaseTimes.size();
        for(int i=1;i<n;i++){
            v.push_back(releaseTimes[i]-releaseTimes[i-1]);
        }
        multimap<char,int> mp;
        for(int i=0;i< keysPressed.size();i++){
            mp.insert({keysPressed[i],v[i]});
        }
        char ans;
        int maxi=0;
        for(auto value:mp){
         maxi=max(maxi,value.second);
        }
        for(auto value:mp){
            if(value.second==maxi){
                ans=value.first;
            }
        }
       return ans;
    }
};
