class Solution {
public:
    int maximumValue(vector<string>& strs) {
       int n = strs.size();
       vector<int> temp;
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<strs[i].size();j++){
                if(strs[i][j]>=97 && strs[i][j]<=122){
                    temp.push_back(strs[i].size());
                    break;
                }
                else{
                    if(count==strs[i].size()-1){
                        temp.push_back(stoi(strs[i]));
                    }
                }
                count++;
            }
         
        }
        sort(temp.begin(),temp.end());
        return temp[temp.size()-1];
    }
};
