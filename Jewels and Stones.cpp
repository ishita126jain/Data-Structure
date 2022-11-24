class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
      unordered_map<char,int> mp;
      for(int i=0;i<stones.size();i++){
          mp[stones[i]]++;
      }
      int ans=0;
      for(int j=0;j<jewels.size();j++){
          for(auto value:mp){
              if(value.first==jewels[j]){
                  ans+=value.second;
                  break;
              }
          }
      }
      return ans;
    }
};
