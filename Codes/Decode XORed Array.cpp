class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> ans;
        ans.push_back(first);
        int temp=0;
        for(int i=0;i<encoded.size();i++){
           temp=encoded[i]^first;
           ans.push_back(temp);
           first=temp;
        }
        return ans;
    }
};
