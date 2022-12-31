class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> temp=score;
        sort(temp.begin(),temp.end(),greater<int>()); 
        vector<string> ans;
        map<int,int> mp1;
        for(int i=0;i<score.size();i++){
            mp1[temp[i]]=i;
        }
        for(int i=0;i<score.size();i++){
            for(auto value:mp1){
                if(score[i]==value.first){
                    if(value.second==0){
                        ans.push_back("Gold Medal");
                    }
                    else if(value.second == 1){
                        ans.push_back("Silver Medal");
                    }
                    else if(value.second == 2){
                        ans.push_back("Bronze Medal");
                    }
                    else{
                        string temp= to_string(value.second+1);
                        ans.push_back(temp);
                    }
                }
                else{
                    continue;
                }
            }
        }
        return ans;
    }
};
