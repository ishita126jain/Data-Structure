class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        unordered_map<char,int> mp1;
        for(int i=0;i<suits.size();i++){
            mp1[suits[i]]++;
        }

        unordered_map<int,int> mp2;
        for(int i=0;i<ranks.size();i++){
            mp2[ranks[i]]++;
        }
        for(auto value:mp1){
            if(value.second>=5){
                return "Flush";
            }
        }
         for(auto value:mp2){
            cout<<value.first<<" "<<value.second<<endl;
        }
        for(auto value:mp2){
            if(value.second>=3){
                return "Three of a Kind";
            }
        }
        for(auto value:mp2){
            if(value.second>=2){
                return "Pair";
            }
        }
         
        return "High Card";
    }
};
