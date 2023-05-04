class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.size()==1){
            return stones[0];
        }
        if(stones.size()==2 && stones[0]==stones[1]){
            return 0;
        }
        vector<int> temp=stones;
        while(temp.size()!=1){
            if(temp.size()==2 && temp[0]==temp[1]){
                return 0;
            }
            vector<int> v;
            sort(temp.begin(),temp.end());
            reverse(temp.begin(),temp.end());
            if(temp[0]==temp[1]){
                for(int i=2;i<temp.size();i++){
                    v.push_back(temp[i]);
                }
                temp=v;
            }
            else if(temp[0]!=temp[1]){
                v.push_back(abs(temp[0]-temp[1]));
               for(int i=2;i<temp.size();i++){
                    v.push_back(temp[i]);
                } 
                temp=v;
            }
        }
        return temp[0];
    }
};
